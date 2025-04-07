#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e920);
CLANG_FORWARD_PROC_SYMBOL(public_6374590);

#define public_63745ba _public_63745ba
#define public_63745de _public_63745de
#define public_63745f9 _public_63745f9
#define public_63745fc _public_63745fc
#define public_6374602 _public_6374602

PROC_DECLARE(0x6374590, internal_6374590, public_6374590);
extern "C" NAKED register_t __cdecl internal_6374590()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_658b24c]
        push esi
        dec eax
        push edi
        push eax
        call public_636e920
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        lea esi, ds:[ecx+4]
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        test ecx, ecx
        mov dword ptr ss : [esp+8], eax
        lea edi, ds:[edx+4]
        je public_6374602
        public_63745ba : nop
        mov edx, dword ptr ds : [edi]
        test edx, edx
        je public_6374602
        cmp ecx, edx
        jne public_63745de
        push ecx
        lea eax, ss:[esp+0xC]
        push eax
        call public_636e1b0
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 8
        add esi, 4
        add edi, 4
        jmp public_63745fc
        public_63745de : nop
        mov edx, dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [ecx+0x14]
        and edx, 0xFFFFFF
        and ecx, 0xFFFFFF
        cmp ecx, edx
        jbe public_63745f9
        add esi, 4
        jmp public_63745fc
        public_63745f9 : nop
        add edi, 4
        public_63745fc : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        jne public_63745ba
        public_6374602 : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6374590)
    }
}

#undef public_63745ba
#undef public_63745de
#undef public_63745f9
#undef public_63745fc
#undef public_6374602
