#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);
CLANG_FORWARD_PROC_SYMBOL(public_63578a0);
CLANG_FORWARD_PROC_SYMBOL(public_6358c00);
CLANG_FORWARD_PROC_SYMBOL(public_6358d60);
CLANG_FORWARD_PROC_SYMBOL(public_6359380);

#define public_6358de2 _public_6358de2
#define public_6358e00 _public_6358e00
#define public_6358e28 _public_6358e28
#define public_6358e95 _public_6358e95
#define public_6358eb5 _public_6358eb5

PROC_DECLARE(0x6358d60, internal_6358d60, public_6358d60);
extern "C" NAKED register_t __cdecl internal_6358d60()
{
    __asm
    {
        sub esp, 0x124
        push esi
        push edi
/*FIXUP push offset _public_6261260 @0x6358d68*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 2
        push 0x10
        lea eax, ss:[esp+0xAC]
        push eax
        mov esi, ecx
        call public_6273bc0
        mov ecx, dword ptr ds : [esi+0x74]
        test ecx, ecx
        jne public_6358de2
        fld dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x34]
        mov eax, dword ptr ds : [ecx+0x98]
        mov ecx, dword ptr ds : [esi+0x70]
        fchs 
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+4]
        lea edx, ds:[esi+0xA8]
        fchs 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x110], edx
        lea edx, ds:[esi+0x98]
        fchs 
        mov dword ptr ss : [esp+0x114], edx
        lea edx, ss:[esp+0xC]
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x108], eax
        mov dword ptr ss : [esp+0x10C], ecx
        mov dword ptr ss : [esp+0x124], edx
        jmp public_6358e28
        public_6358de2 : nop
        mov eax, dword ptr ds : [esi+0x70]
        test eax, eax
        mov dword ptr ss : [esp+0x108], eax
        jne public_6358e00
        mov eax, dword ptr ds : [esi+0x30]
        mov eax, dword ptr ds : [eax+0x98]
        mov dword ptr ss : [esp+0x108], eax
        public_6358e00 : nop
        lea edx, ds:[esi+0x98]
        mov dword ptr ss : [esp+0x110], edx
        lea edx, ds:[esi+0xA8]
        mov dword ptr ss : [esp+0x10C], ecx
        mov dword ptr ss : [esp+0x114], edx
        mov dword ptr ss : [esp+0x124], esi
        public_6358e28 : nop
        fld dword ptr ds : [esi+0x60]
        lea edx, ds:[esi+0x10]
        fst dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x128], edx
        fstp dword ptr ss : [esp+0x118]
        mov dword ptr ss : [esp+0xF0], 0
        mov edx, dword ptr ds : [eax+0x10]
        test edx, edx
        jne public_6358e95
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_6358e95
        mov edx, dword ptr ss : [esp+8]
        mov edi, dword ptr ss : [esp+0x138]
        lea eax, ss:[esp+0x120]
        push eax
        mov eax, dword ptr ds : [edi+0x44]
        lea ecx, ss:[esp+0x120]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_6358c00
        mov al, byte ptr ds : [edi+0x34]
        test al, al
        je public_6358eb5
        push edi
        lea ecx, ss:[esp+0x20]
        call public_6359380
        jmp public_6358eb5
        public_6358e95 : nop
        mov eax, dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x120]
        push ecx
        lea edx, ss:[esp+0x120]
        push edx
        push eax
        push 0
        lea ecx, ss:[esp+0x2C]
        call public_6358c00
        public_6358eb5 : nop
        mov ecx, dword ptr ss : [esp+0x134]
        movsx edx, word ptr ds : [esi+0x52]
        mov eax, dword ptr ss : [esp+0x130]
        push ecx
        push edx
        push 1
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_63578a0
        pop edi
        pop esi
        add esp, 0x124
        ret 0xC
        UNREACHABLE_TRAP(0x6358d60)
    }
}

#undef public_6358de2
#undef public_6358e00
#undef public_6358e28
#undef public_6358e95
#undef public_6358eb5
