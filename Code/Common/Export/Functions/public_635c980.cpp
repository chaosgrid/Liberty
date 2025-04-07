#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635c590);
CLANG_FORWARD_PROC_SYMBOL(public_635c980);

#define public_635c98d _public_635c98d
#define public_635c99a _public_635c99a
#define public_635c9c2 _public_635c9c2
#define public_635c9c6 _public_635c9c6

PROC_DECLARE(0x635c980, internal_635c980, public_635c980);
extern "C" NAKED register_t __cdecl internal_635c980()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        public_635c98d : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [ebp+0xC]
        sub esi, dword ptr ds : [eax+0xC]
        dec esi
        xor ebx, ebx
        public_635c99a : nop
        xor ecx, ecx
        mov cx, word ptr ss : [ebp+0x1A]
        cmp ebx, ecx
        jge public_635c9c6
        mov edx, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [edx+ebx*4]
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        push eax
        push edi
        call public_635c590
        cmp eax, 1
        je public_635c9c2
        inc ebx
        jmp public_635c99a
        public_635c9c2 : nop
        mov ebp, edi
        jmp public_635c98d
        public_635c9c6 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x635c980)
    }
}

#undef public_635c98d
#undef public_635c99a
#undef public_635c9c2
#undef public_635c9c6
