#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f59830);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a180);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f59886 _public_6f59886
#define public_6f59888 _public_6f59888
#define public_6f59890 _public_6f59890
#define public_6f598a5 _public_6f598a5
#define public_6f598b2 _public_6f598b2
#define public_6f598d3 _public_6f598d3
#define public_6f598eb _public_6f598eb
#define public_6f598f5 _public_6f598f5
#define public_6f59915 _public_6f59915
#define public_6f5992e _public_6f5992e
#define public_6f59932 _public_6f59932
#define public_6f59945 _public_6f59945
#define public_6f59981 _public_6f59981
#define public_6f599b0 _public_6f599b0
#define public_6f599ec _public_6f599ec
#define public_6f599f0 _public_6f599f0
#define public_6f59a07 _public_6f59a07
#define public_6f59a30 _public_6f59a30
#define public_6f59a40 _public_6f59a40
#define public_6f59a50 _public_6f59a50
#define public_6f59a62 _public_6f59a62
#define public_6f59a78 _public_6f59a78
#define public_6f59a93 _public_6f59a93
#define public_6f59aab _public_6f59aab
#define public_6f59ac0 _public_6f59ac0
#define public_6f59ad9 _public_6f59ad9
#define public_6f59ae4 _public_6f59ae4
#define public_6f59afa _public_6f59afa
#define public_6f59afd _public_6f59afd

PROC_DECLARE(0x6f59830, internal_6f59830, public_6f59830);
extern "C" NAKED register_t __cdecl internal_6f59830()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        sub edi, esi
        mov eax, 0x92492493
        imul edi
        add edx, edi
        mov edi, dword ptr ss : [esp+0x24]
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6f599b0
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_6f59886
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edi, edx
        mov ecx, edx
        jb public_6f59888
        public_6f59886 : nop
        mov ecx, edi
        public_6f59888 : nop
        test ebx, ebx
        jne public_6f59890
        xor edx, edx
        jmp public_6f598a5
        public_6f59890 : nop
        sub esi, ebx
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f598a5 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f598b2
        xor eax, eax
        public_6f598b2 : nop
        imul eax, 0x38
        push eax
        call public_6fa912a
        mov ebp, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6f598eb
        public_6f598d3 : nop
        push esi
        push ebx
        call public_6f5a180
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x38
        add esp, 8
        add ebx, 0x38
        cmp esi, eax
        jne public_6f598d3
        public_6f598eb : nop
        test edi, edi
        mov esi, ebx
        jbe public_6f59915
        mov dword ptr ss : [esp+0x24], edi
        public_6f598f5 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_6f5a180
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x38
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6f598f5
        mov eax, dword ptr ss : [esp+0x20]
        public_6f59915 : nop
        mov edx, edi
        imul edx, 0x38
        lea ecx, ds:[edx+ebx]
        mov ebx, dword ptr ss : [ebp+8]
        cmp eax, ebx
        mov esi, eax
        je public_6f59945
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6f59932
        public_6f5992e : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_6f59932 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6f5a180
        add esi, 0x38
        add esp, 8
        cmp esi, ebx
        jne public_6f5992e
        public_6f59945 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x38
        add eax, esi
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        test eax, eax
        jne public_6f59981
        xor edx, edx
        mov edx, edi
        imul edx, 0x38
        pop edi
        add edx, esi
        mov dword ptr ss : [ebp+4], esi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f59981 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        add edx, edi
        imul edx, 0x38
        pop edi
        add edx, esi
        mov dword ptr ss : [ebp+4], esi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f599b0 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov ebp, esi
        sub ebp, ebx
        mov eax, 0x92492493
        imul ebp
        add edx, ebp
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_6f59a78
        mov eax, edi
        imul eax, 0x38
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_6f59a07
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6f599f0
        public_6f599ec : nop
        mov eax, dword ptr ss : [esp+0x24]
        public_6f599f0 : nop
        add eax, ebp
        push ebp
        push eax
        call public_6f5a180
        add ebp, 0x38
        add esp, 8
        cmp ebp, esi
        jne public_6f599ec
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f59a07 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        je public_6f59a40
        lea esp, ss:[esp]
        public_6f59a30 : nop
        push ebp
        push esi
        call public_6f5a180
        add esp, 8
        add esi, 0x38
        dec edi
        jne public_6f59a30
        public_6f59a40 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+8]
        cmp ebx, eax
        je public_6f59a62
        nop 
        lea esp, ss:[esp]
        public_6f59a50 : nop
        mov edi, ebx
        add ebx, 0x38
        cmp ebx, eax
        mov ecx, 0xE
        mov esi, ebp
        rep movsd
        jne public_6f59a50
        public_6f59a62 : nop
        mov ecx, dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add ecx, eax
        pop ebp
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f59a78 : nop
        test edi, edi
        jbe public_6f59afd
        mov eax, edi
        imul eax, 0x38
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_6f59aab
        public_6f59a93 : nop
        push edi
        push ebp
        call public_6f5a180
        add edi, 0x38
        add esp, 8
        add ebp, 0x38
        cmp edi, esi
        jne public_6f59a93
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f59aab : nop
        mov edx, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov eax, edx
        sub eax, ebp
        cmp ebx, eax
        je public_6f59ad9
        lea ebx, ds:[ebx]
        public_6f59ac0 : nop
        sub eax, 0x38
        sub edx, 0x38
        cmp eax, ebx
        mov ecx, 0xE
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6f59ac0
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f59ad9 : nop
        lea eax, ds:[ebx+ebp]
        cmp ebx, eax
        je public_6f59afa
        mov edx, dword ptr ss : [esp+0x28]
        public_6f59ae4 : nop
        mov edi, ebx
        add ebx, 0x38
        cmp ebx, eax
        mov ecx, 0xE
        mov esi, edx
        rep movsd
        jne public_6f59ae4
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f59afa : nop
        add dword ptr ds : [ecx+8], ebp
        public_6f59afd : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f59830)
    }
}

#undef public_6f59886
#undef public_6f59888
#undef public_6f59890
#undef public_6f598a5
#undef public_6f598b2
#undef public_6f598d3
#undef public_6f598eb
#undef public_6f598f5
#undef public_6f59915
#undef public_6f5992e
#undef public_6f59932
#undef public_6f59945
#undef public_6f59981
#undef public_6f599b0
#undef public_6f599ec
#undef public_6f599f0
#undef public_6f59a07
#undef public_6f59a30
#undef public_6f59a40
#undef public_6f59a50
#undef public_6f59a62
#undef public_6f59a78
#undef public_6f59a93
#undef public_6f59aab
#undef public_6f59ac0
#undef public_6f59ad9
#undef public_6f59ae4
#undef public_6f59afa
#undef public_6f59afd
