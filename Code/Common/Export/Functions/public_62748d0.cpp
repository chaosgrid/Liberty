#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261170);
CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_62732a0);
CLANG_FORWARD_PROC_SYMBOL(public_6274540);
CLANG_FORWARD_PROC_SYMBOL(public_62748d0);
CLANG_FORWARD_PROC_SYMBOL(public_6279310);
CLANG_FORWARD_PROC_SYMBOL(public_62795d0);
CLANG_FORWARD_PROC_SYMBOL(public_62798b0);
CLANG_FORWARD_PROC_SYMBOL(public_6279bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6279c30);
CLANG_FORWARD_PROC_SYMBOL(public_6279c50);
CLANG_FORWARD_PROC_SYMBOL(public_6279ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6279df0);
CLANG_FORWARD_PROC_SYMBOL(public_627ca90);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6274900 _public_6274900
#define public_6274917 _public_6274917
#define public_6274983 _public_6274983
#define public_62749b6 _public_62749b6
#define public_62749c3 _public_62749c3
#define public_62749d3 _public_62749d3
#define public_62749f4 _public_62749f4
#define public_6274a01 _public_6274a01
#define public_6274a10 _public_6274a10
#define public_6274a31 _public_6274a31
#define public_6274a3e _public_6274a3e
#define public_6274a50 _public_6274a50
#define public_6274a71 _public_6274a71
#define public_6274a7e _public_6274a7e
#define public_6274a98 _public_6274a98
#define public_6274aa9 _public_6274aa9
#define public_6274abf _public_6274abf
#define public_6274ae0 _public_6274ae0
#define public_6274af1 _public_6274af1
#define public_6274b07 _public_6274b07

PROC_DECLARE(0x62748d0, internal_62748d0, public_62748d0);
extern "C" NAKED register_t __cdecl internal_62748d0()
{
    __asm
    {
        push ebp
        push esi
        mov ebp, ecx
        lea eax, ss:[ebp+0xC]
        push edi
        push eax
        call public_6334430
        lea ecx, ss:[ebp+0x10]
        push ecx
        call public_6334430
        mov eax, dword ptr ss : [ebp+0xB4]
        add esp, 8
        xor esi, esi
        test eax, eax
        jle public_6274917
        lea edi, ss:[ebp+0x14]
        lea esp, ss:[esp]
        public_6274900 : nop
        push edi
        call public_6334430
        mov eax, dword ptr ss : [ebp+0xB4]
        add esp, 4
        inc esi
        add edi, 4
        cmp esi, eax
        jl public_6274900
        public_6274917 : nop
        lea edx, ss:[ebp+0xB8]
        push edx
        call public_6334430
        add esp, 4
        lea ecx, ss:[ebp+0xCC]
        call public_6333e40
        lea ecx, ss:[ebp+0xD0]
        call public_6333e40
        lea eax, ss:[ebp+0x1C4]
        push eax
        call public_6334430
        lea esi, ss:[ebp+0x1C8]
        push esi
        call public_6334430
        add esp, 8
        lea ecx, ds:[esi+4]
        mov dword ptr ds : [esi], 0
        call public_6261170
        mov dword ptr ds : [esi+0x34], 0x420C0000
        mov dword ptr ds : [esi+0x38], 0x3E800000
        mov dword ptr ds : [esi+0x3C], 0x49742400
        lea edi, ss:[ebp+0x134]
        xor esi, esi
        push ebx
        public_6274983 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_62749c3
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        cmp esi, eax
        jae public_62749c3
        mov ebx, dword ptr ds : [ecx+esi*4]
        test ebx, ebx
        je public_62749b6
        push ebx
        call public_6334430
        add esp, 4
        mov ecx, ebx
        call public_62732a0
        push ebx
        call public_6391d5a
        add esp, 4
        public_62749b6 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+esi*4], 0
        inc esi
        jmp public_6274983
        public_62749c3 : nop
        mov ecx, edi
        call public_6279df0
        lea edi, ss:[ebp+0x144]
        xor esi, esi
        pop ebx
        public_62749d3 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_6274a01
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        cmp esi, eax
        jae public_6274a01
        mov ecx, dword ptr ds : [ecx+esi*4]
        test ecx, ecx
        je public_62749f4
        push 1
        call public_627ca90
        public_62749f4 : nop
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+esi*4], 0
        inc esi
        jmp public_62749d3
        public_6274a01 : nop
        mov ecx, edi
        call public_6279df0
        lea edi, ss:[ebp+0x154]
        xor esi, esi
        public_6274a10 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_6274a3e
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        cmp esi, eax
        jae public_6274a3e
        mov ecx, dword ptr ds : [ecx+esi*4]
        test ecx, ecx
        je public_6274a31
        push 1
        call public_6279bf0
        public_6274a31 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+esi*4], 0
        inc esi
        jmp public_6274a10
        public_6274a3e : nop
        mov ecx, edi
        call public_6279df0
        lea edi, ss:[ebp+0x164]
        xor esi, esi
        lea ecx, ds:[ecx]
        public_6274a50 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_6274a7e
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        cmp esi, eax
        jae public_6274a7e
        mov ecx, dword ptr ds : [ecx+esi*4]
        test ecx, ecx
        je public_6274a71
        push 1
        call public_6279c30
        public_6274a71 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+esi*4], 0
        inc esi
        jmp public_6274a50
        public_6274a7e : nop
        mov ecx, edi
        call public_6279df0
        lea esi, ss:[ebp+0x174]
        mov ecx, esi
        xor edi, edi
        call public_626a600
        test eax, eax
        jbe public_6274abf
        public_6274a98 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+edi*4]
        test ecx, ecx
        je public_6274aa9
        push 1
        call public_6279c50
        public_6274aa9 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+edi*4], 0
        mov ecx, esi
        inc edi
        call public_626a600
        cmp edi, eax
        jb public_6274a98
        public_6274abf : nop
        mov ecx, esi
        call public_6279df0
        lea esi, ss:[ebp+0x184]
        mov ecx, esi
        xor edi, edi
        call public_626a600
        test eax, eax
        jbe public_6274b07
        lea esp, ss:[esp]
        public_6274ae0 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+edi*4]
        test ecx, ecx
        je public_6274af1
        push 1
        call public_6279ce0
        public_6274af1 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+edi*4], 0
        mov ecx, esi
        inc edi
        call public_626a600
        cmp edi, eax
        jb public_6274ae0
        public_6274b07 : nop
        mov ecx, esi
        call public_6279df0
        lea ecx, ss:[ebp+0x194]
        call public_6279310
        lea ecx, ss:[ebp+0x1A4]
        call public_62795d0
        lea ecx, ss:[ebp+0x1B4]
        call public_62798b0
        pop edi
        pop esi
        mov ecx, ebp
        pop ebp
        jmp public_6274540
        UNREACHABLE_TRAP(0x62748d0)
    }
}

#undef public_6274900
#undef public_6274917
#undef public_6274983
#undef public_62749b6
#undef public_62749c3
#undef public_62749d3
#undef public_62749f4
#undef public_6274a01
#undef public_6274a10
#undef public_6274a31
#undef public_6274a3e
#undef public_6274a50
#undef public_6274a71
#undef public_6274a7e
#undef public_6274a98
#undef public_6274aa9
#undef public_6274abf
#undef public_6274ae0
#undef public_6274af1
#undef public_6274b07
