#include "DebugLib-PCH.h"


#define public_65df484 _public_65df484
#define public_65df491 _public_65df491
#define public_65df498 _public_65df498
#define public_65df4a6 _public_65df4a6

PROC_DECLARE(0x65df470, internal_65df470, public_65df470);
extern "C" NAKED register_t __cdecl internal_65df470()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        push eax
        push eax
        push eax
        mov edx, dword ptr ss : [ebp+0xC]
        lea ecx, ds:[ecx]
        public_65df484 : nop
        mov al, byte ptr ds : [edx]
        or al, al
        je public_65df491
        inc edx
        bts dword ptr ss : [esp], eax
        jmp public_65df484
        public_65df491 : nop
        mov esi, dword ptr ss : [ebp+8]
        or ecx, 0xFFFFFFFF
        nop 
        public_65df498 : nop
        inc ecx
        mov al, byte ptr ds : [esi]
        or al, al
        je public_65df4a6
        inc esi
        bt dword ptr ss : [esp], eax
        jae public_65df498
        public_65df4a6 : nop
        mov eax, ecx
        add esp, 0x20
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x65df470)
    }
}

#undef public_65df484
#undef public_65df491
#undef public_65df498
#undef public_65df4a6
