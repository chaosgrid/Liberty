#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62111d0);

#define public_62111eb _public_62111eb
#define public_62111ed _public_62111ed
#define public_62111f6 _public_62111f6
#define public_62111f9 _public_62111f9

PROC_DECLARE(0x62111d0, internal_62111d0, public_62111d0);
extern "C" NAKED register_t __cdecl internal_62111d0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+4], 0
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        test eax, eax
        je public_62111eb
        mov dword ptr ds : [eax], edx
        jmp public_62111ed
        public_62111eb : nop
        mov dword ptr ds : [ecx], edx
        public_62111ed : nop
        test edx, edx
        je public_62111f6
        mov dword ptr ds : [edx+4], eax
        jmp public_62111f9
        public_62111f6 : nop
        mov dword ptr ds : [ecx+4], eax
        public_62111f9 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], 0
        pop esi
        mov dword ptr ds : [eax], edx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62111d0)
    }
}

#undef public_62111eb
#undef public_62111ed
#undef public_62111f6
#undef public_62111f9
