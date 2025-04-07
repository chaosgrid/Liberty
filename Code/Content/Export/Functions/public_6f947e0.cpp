#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f947e0);

#define public_6f947fc _public_6f947fc
#define public_6f94817 _public_6f94817
#define public_6f94830 _public_6f94830
#define public_6f94862 _public_6f94862
#define public_6f94880 _public_6f94880
#define public_6f948a0 _public_6f948a0
#define public_6f948f6 _public_6f948f6
#define public_6f94909 _public_6f94909
#define public_6f94910 _public_6f94910
#define public_6f94931 _public_6f94931
#define public_6f94937 _public_6f94937
#define public_6f94958 _public_6f94958

PROC_DECLARE(0x6f947e0, internal_6f947e0, public_6f947e0);
extern "C" NAKED register_t __cdecl internal_6f947e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        sub esp, 8
        push ebx
        push ebp
        push esi
        lea esi, ds:[edx+4]
        test esi, esi
        push edi
        mov ebx, ecx
        jne public_6f947fc
        mov dword ptr ds : [ebx], esi
        mov byte ptr ds : [ebx+4], 0
        jmp public_6f94830
        public_6f947fc : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[ebx+4]
        jb public_6f94817
        mov eax, 0x2F
        public_6f94817 : nop
        mov ecx, eax
        mov edi, ebp
        mov ebp, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+4], 0
        mov dword ptr ds : [ebx], eax
        public_6f94830 : nop
        mov eax, dword ptr ds : [edx+0x34]
        mov dword ptr ds : [ebx+0x34], eax
        mov ecx, dword ptr ds : [edx+0x38]
        mov dword ptr ds : [ebx+0x38], ecx
        lea esi, ds:[edx+0x3C]
        lea edi, ds:[ebx+0x3C]
        mov ecx, 0x1A
        rep movsd
        lea esi, ds:[edx+0xA8]
        test esi, esi
        jne public_6f94862
        mov dword ptr ds : [ebx+0xA4], esi
        mov byte ptr ds : [ebx+0xA8], 0
        jmp public_6f948a0
        public_6f94862 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[ebx+0xA8]
        jb public_6f94880
        mov eax, 0x2F
        public_6f94880 : nop
        mov ecx, eax
        mov edi, ebp
        mov ebp, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+0xA8], 0
        mov dword ptr ds : [ebx+0xA4], eax
        public_6f948a0 : nop
        lea eax, ds:[edx+0xD8]
        mov esi, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0xD8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov cl, byte ptr ds : [edx+0xE4]
        mov byte ptr ds : [ebx+0xE4], cl
        mov eax, dword ptr ds : [edx+0xE8]
        mov dword ptr ds : [ebx+0xE8], eax
        lea ecx, ds:[edx+0xEC]
        lea eax, ds:[ebx+0xEC]
        cmp eax, ecx
        je public_6f94958
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f94909
        public_6f948f6 : nop
        cmp ebp, ecx
        je public_6f94909
        mov edi, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebp, dword ptr ss : [ebp]
        jne public_6f948f6
        public_6f94909 : nop
        cmp eax, esi
        mov edi, eax
        je public_6f94931
        nop 
        public_6f94910 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ds:[ebx+0xEC]
        call public_6ecfe80
        cmp edi, esi
        jne public_6f94910
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f94931 : nop
        cmp ebp, ecx
        mov edi, ebp
        je public_6f94958
        public_6f94937 : nop
        lea edx, ds:[edi+8]
        push edx
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ds:[ebx+0xEC]
        call public_6f1e390
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [esp+0x10]
        jne public_6f94937
        mov edx, dword ptr ss : [esp+0x1C]
        public_6f94958 : nop
        mov cx, word ptr ds : [edx+0xF8]
        mov word ptr ds : [ebx+0xF8], cx
        mov al, byte ptr ds : [edx+0xFA]
        mov byte ptr ds : [ebx+0xFA], al
        mov ecx, dword ptr ds : [edx+0xFC]
        mov dword ptr ds : [ebx+0xFC], ecx
        mov eax, dword ptr ds : [edx+0x100]
        pop edi
        mov dword ptr ds : [ebx+0x100], eax
        mov ecx, dword ptr ds : [edx+0x104]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x104], ecx
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f947e0)
    }
}

#undef public_6f947fc
#undef public_6f94817
#undef public_6f94830
#undef public_6f94862
#undef public_6f94880
#undef public_6f948a0
#undef public_6f948f6
#undef public_6f94909
#undef public_6f94910
#undef public_6f94931
#undef public_6f94937
#undef public_6f94958
