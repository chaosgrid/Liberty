#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6eb3dec _public_6eb3dec
#define public_6eb3e15 _public_6eb3e15

PROC_DECLARE(0x6eb3dc0, internal_6eb3dc0, public_6eb3dc0);
extern "C" NAKED register_t __cdecl internal_6eb3dc0()
{
    __asm
    {
        push esi
        push 0xC
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6eb3e15
        mov eax, dword ptr ds : [public_6ed4278]
        test eax, eax
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], eax
        jne public_6eb3dec
        mov eax, dword ptr ds : [public_6ed1320]
        mov dword ptr ds : [esi+8], eax
        public_6eb3dec : nop
        mov dword ptr ds : [esi], offset public_6ed1310
        call dword ptr ds : [public_6ed1008]
        mov edx, dword ptr ds : [public_6ed4278]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov al, 1
        pop esi
        ret 
        public_6eb3e15 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eb3dc0)
    }
}

#undef public_6eb3dec
#undef public_6eb3e15
