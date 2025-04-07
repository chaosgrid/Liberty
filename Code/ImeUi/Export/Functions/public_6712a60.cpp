#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712620);

#define public_6712a7d _public_6712a7d
#define public_6712aac _public_6712aac

PROC_DECLARE(0x6712a60, internal_6712a60, public_6712a60);
extern "C" NAKED register_t __cdecl internal_6712a60()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        test al, al
        je public_6712a7d
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [esi+0x2C], edx
        public_6712a7d : nop
        lea ecx, ds:[esi+4]
        test ecx, ecx
        je public_6712aac
        mov al, byte ptr ds : [esi+0x7C]
        test al, al
        je public_6712aac
        mov eax, dword ptr ds : [esi+0x78]
        mov edx, dword ptr ds : [esi+0x30]
        add eax, edx
        mov edx, dword ptr ds : [esi+0x20]
        add eax, edx
        mov edx, dword ptr ds : [esi+0x74]
        push eax
        mov eax, dword ptr ds : [esi+0x2C]
        add edx, eax
        mov eax, dword ptr ds : [esi+0x1C]
        add edx, eax
        push edx
        call public_6712620
        public_6712aac : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6712a60)
    }
}

#undef public_6712a7d
#undef public_6712aac
