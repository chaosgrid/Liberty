#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9da60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f9da78 _public_6f9da78
#define public_6f9da98 _public_6f9da98
#define public_6f9daa0 _public_6f9daa0
#define public_6f9dab8 _public_6f9dab8
#define public_6f9dac3 _public_6f9dac3

PROC_DECLARE(0x6f9da60, internal_6f9da60, public_6f9da60);
extern "C" NAKED register_t __cdecl internal_6f9da60()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx+8]
        push ebp
        push esi
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, eax
        mov ebp, ecx
        je public_6f9dac3
        push edi
        lea edi, ss:[ebp+0x1C]
        public_6f9da78 : nop
        push esi
        mov ecx, edi
        call public_6fa7200
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_6f9da98
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f9da98
        lea eax, ss:[esp+0x18]
        jmp public_6f9daa0
        public_6f9da98 : nop
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ss:[esp+0x10]
        public_6f9daa0 : nop
        mov eax, dword ptr ds : [eax]
        mov cl, byte ptr ds : [eax+0x3C]
        test cl, cl
        je public_6f9dab8
        mov byte ptr ds : [eax+0x3C], 0
        add eax, 0x2C
        push eax
        mov ecx, ebp
        call public_6f9da60
        public_6f9dab8 : nop
        mov eax, dword ptr ds : [ebx+8]
        add esi, 4
        cmp esi, eax
        jne public_6f9da78
        pop edi
        public_6f9dac3 : nop
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f9da60)
    }
}

#undef public_6f9da78
#undef public_6f9da98
#undef public_6f9daa0
#undef public_6f9dab8
#undef public_6f9dac3
