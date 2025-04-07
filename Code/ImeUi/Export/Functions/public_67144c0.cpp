#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67144c0);

#define public_671450f _public_671450f
#define public_6714523 _public_6714523

PROC_DECLARE(0x67144c0, internal_67144c0, public_67144c0);
extern "C" NAKED register_t __cdecl internal_67144c0()
{
    __asm
    {
        mov al, byte ptr ds : [public_671cfba]
        test al, al
        je public_6714523
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [public_671b518], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_671b524], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [public_671b528], eax
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_671b52c], edx
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_671b530], eax
        mov eax, dword ptr ds : [public_6719084]
        test eax, eax
        mov dword ptr ds : [public_671b520], ecx
        je public_671450f
        mov dword ptr ds : [public_671b520], eax
        public_671450f : nop
        mov eax, dword ptr ds : [public_67190a0]
        mov dword ptr ds : [public_671b51c], ecx
        test eax, eax
        je public_6714523
        mov dword ptr ds : [public_671b51c], eax
        public_6714523 : nop
        ret 
        UNREACHABLE_TRAP(0x67144c0)
    }
}

#undef public_671450f
#undef public_6714523
