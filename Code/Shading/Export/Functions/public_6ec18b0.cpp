#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec0b80);
CLANG_FORWARD_PROC_SYMBOL(public_6ec1710);

#define public_6ec1944 _public_6ec1944

PROC_DECLARE(0x6ec18b0, internal_6ec18b0, public_6ec18b0);
extern "C" NAKED register_t __cdecl internal_6ec18b0()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        mov ebx, dword ptr ss : [esp+0x3C]
        push ebp
        push esi
        push edi
        mov ecx, ebx
        call public_6ec0b80
        mov esi, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_6ed4ce8 @0x6ec18c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ce8
        push esi
        call dword ptr ds : [eax+0x60]
        mov ebp, eax
        xor eax, eax
        push eax
        mov dword ptr ss : [esp+0x18], offset public_6ed4094
        mov ecx, 0xB
        lea edi, ss:[esp+0x1C]
        rep stosd
        mov ecx, dword ptr ss : [esp+0x54]
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x28], ecx
        push esi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x30], 0x80000000
        mov dword ptr ss : [esp+0x34], 1
        mov dword ptr ss : [esp+0x3C], 3
        mov dword ptr ss : [esp+0x40], 0x8000080
        mov dword ptr ss : [esp+0x20], 0x34
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call public_6ec1710
        test ebp, ebp
        mov edi, eax
        je public_6ec1944
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_6ed4ce4 @0x6ec193b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ce4
        push esi
        call dword ptr ds : [ecx+0x60]
        public_6ec1944 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 0xC
        UNREACHABLE_TRAP(0x6ec18b0)
    }
}

#undef public_6ec1944
