#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cef3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6d549fa _public_6d549fa
#define public_6d549fc _public_6d549fc

PROC_DECLARE(0x6d54970, internal_6d54970, public_6d54970);
extern "C" NAKED register_t __cdecl internal_6d54970()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 8
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFE
        jbe public_6d549fc
        mov edx, dword ptr ds : [public_6d90264]
        dec ecx
        cmp ecx, edx
        jae public_6d549fc
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        mov esi, dword ptr ds : [ecx+edx+0x348]
        test esi, esi
        je public_6d549fc
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov esi, 0xFFFFFFFD
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6d549fa
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_6d549fa
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        push eax
        call public_6cef3b0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [edx+0x12C]
        xor eax, eax
        pop esi
        add esp, 8
        ret 
        public_6d549fa : nop
        mov eax, esi
        public_6d549fc : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d54970)
    }
}

#undef public_6d549fa
#undef public_6d549fc
