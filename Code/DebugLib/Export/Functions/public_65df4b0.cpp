#include "DebugLib-PCH.h"


#define public_65df4c4 _public_65df4c4
#define public_65df4d1 _public_65df4d1
#define public_65df4d4 _public_65df4d4
#define public_65df4e4 _public_65df4e4

PROC_DECLARE(0x65df4b0, internal_65df4b0, public_65df4b0);
extern "C" NAKED register_t __cdecl internal_65df4b0()
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
        public_65df4c4 : nop
        mov al, byte ptr ds : [edx]
        or al, al
        je public_65df4d1
        inc edx
        bts dword ptr ss : [esp], eax
        jmp public_65df4c4
        public_65df4d1 : nop
        mov esi, dword ptr ss : [ebp+8]
        public_65df4d4 : nop
        mov al, byte ptr ds : [esi]
        or al, al
        je public_65df4e4
        inc esi
        bt dword ptr ss : [esp], eax
        jae public_65df4d4
        lea eax, ds:[esi-1]
        public_65df4e4 : nop
        add esp, 0x20
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x65df4b0)
    }
}

#undef public_65df4c4
#undef public_65df4d1
#undef public_65df4d4
#undef public_65df4e4
