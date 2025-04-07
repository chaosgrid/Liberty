#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfae0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfc30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0440);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ab0);

#define public_6ecfaf7 _public_6ecfaf7
#define public_6ecfb3a _public_6ecfb3a
#define public_6ecfb4e _public_6ecfb4e
#define public_6ecfb69 _public_6ecfb69
#define public_6ecfba0 _public_6ecfba0
#define public_6ecfbd2 _public_6ecfbd2
#define public_6ecfbd9 _public_6ecfbd9
#define public_6ecfbe6 _public_6ecfbe6
#define public_6ecfc0e _public_6ecfc0e
#define public_6ecfc27 _public_6ecfc27

PROC_DECLARE(0x6ecfae0, internal_6ecfae0, public_6ecfae0);
extern "C" NAKED register_t __cdecl internal_6ecfae0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        xor edi, edi
        cmp esi, edi
        jne public_6ecfaf7
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 
        public_6ecfaf7 : nop
        mov ebx, 1
        push 0x9C
        mov dword ptr ds : [public_6ed5834], esi
        mov dword ptr ds : [public_6ed582c], ebx
        mov dword ptr ds : [public_6ed5840], edi
        mov dword ptr ds : [public_6ed583c], offset public_6ed5838
        call public_6ed0440
        lea eax, ss:[esp+0x1C]
        push eax
        push edi
        call public_6ecfc30
        add esp, 0xC
        test eax, eax
        jne public_6ecfb3a
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6ecfb3a : nop
        mov eax, dword ptr ds : [public_6ed5840]
        cmp eax, 0x7FFF
        jl public_6ecfb4e
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 
        public_6ecfb4e : nop
        add eax, 0x60
        push eax
        call dword ptr ds : [public_6ed1068]
        mov ebp, eax
        add esp, 4
        cmp ebp, edi
        jne public_6ecfb69
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 
        public_6ecfb69 : nop
        lea ecx, ss:[ebp+0x5C]
        push 0x9C
        mov dword ptr ds : [public_6ed5834], esi
        mov dword ptr ds : [public_6ed582c], ebx
        mov dword ptr ds : [public_6ed583c], ecx
        call public_6ed0440
        lea edx, ss:[esp+0x1C]
        push edx
        push edi
        call public_6ecfc30
        add esp, 0xC
        test eax, eax
        jne public_6ecfba0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6ecfba0 : nop
        lea esi, ss:[ebp+0x5D]
        push esi
        mov byte ptr ss : [ebp+0x50], 0
        mov byte ptr ss : [ebp+0x51], 0
        mov dword ptr ss : [ebp+0x54], edi
        mov dword ptr ss : [ebp+0x58], edi
        call public_6ed0ab0
        mov cl, byte ptr ds : [eax]
        add esp, 4
        test cl, cl
        jne public_6ecfc27
        mov al, byte ptr ds : [esi+3]
        add esi, 3
        cmp al, 8
        jne public_6ecfbd2
        mov al, byte ptr ds : [esi+3]
        mov byte ptr ss : [ebp+0x50], al
        jmp public_6ecfbd9
        public_6ecfbd2 : nop
        cmp al, bl
        jne public_6ecfbd9
        inc byte ptr ss : [ebp+0x51]
        public_6ecfbd9 : nop
        test byte ptr ss : [esp+0x18], 4
        je public_6ecfc27
        mov dword ptr ss : [esp+0x10], edi
        xor ebx, ebx
        public_6ecfbe6 : nop
        cmp byte ptr ds : [esi], 8
        jne public_6ecfc0e
        or ecx, 0xFFFFFFFF
        lea edx, ds:[esi+3]
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        cmp ecx, ebx
        jl public_6ecfc0e
        or ecx, 0xFFFFFFFF
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        mov dword ptr ss : [esp+0x10], edx
        mov ebx, ecx
        public_6ecfc0e : nop
        push esi
        call public_6ed0ab0
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_6ecfbe6
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x54], ecx
        mov dword ptr ss : [ebp+0x58], ebx
        public_6ecfc27 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ecfae0)
    }
}

#undef public_6ecfaf7
#undef public_6ecfb3a
#undef public_6ecfb4e
#undef public_6ecfb69
#undef public_6ecfba0
#undef public_6ecfbd2
#undef public_6ecfbd9
#undef public_6ecfbe6
#undef public_6ecfc0e
#undef public_6ecfc27
