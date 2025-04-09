#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51b2f0);
CLANG_FORWARD_PROC_SYMBOL(public_51e100);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bff5c);

#define public_51e1ac _public_51e1ac
#define public_51e1ae _public_51e1ae
#define public_51e21f _public_51e21f
#define public_51e221 _public_51e221

PROC_DECLARE(0x51e100, internal_51e100, public_51e100);
extern "C" NAKED register_t __cdecl internal_51e100()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bff5c @0x51e102*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bff5c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        call public_51b2f0
        xor ebx, ebx
        mov dword ptr ds : [esi+0x10C], ebx
        mov byte ptr ds : [esi+0x110], bl
        mov dword ptr ds : [esi+0x230], ebx
        mov dword ptr ds : [esi+0x22C], ebx
        mov dword ptr ds : [esi+0x228], ebx
        mov dword ptr ds : [esi+0x220], ebx
        mov dword ptr ds : [esi+0x21C], ebx
        mov dword ptr ds : [esi+0x218], ebx
        mov edi, 0x3F800000
        mov dword ptr ds : [esi+0x234], edi
        mov dword ptr ds : [esi+0x224], edi
        mov dword ptr ds : [esi+0x214], edi
        mov dword ptr ds : [esi+0x240], ebx
        mov dword ptr ds : [esi+0x23C], ebx
        mov dword ptr ds : [esi+0x238], ebx
        push 0x38
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [esi], offset public_5dc164
        mov dword ptr ds : [esi+0xF8], ebx
        call public_5b7e84
        add esp, 4
        cmp eax, ebx
        je public_51e1ac
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], offset public_5dc140
        jmp public_51e1ae
        public_51e1ac : nop
        xor eax, eax
        public_51e1ae : nop
        push 0x70
        mov dword ptr ds : [esi+0xFC], eax
        call public_5b7e84
        add esp, 4
        cmp eax, ebx
        je public_51e21f
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+0x30], edi
        mov dword ptr ds : [eax+0x20], edi
        mov dword ptr ds : [eax+0x10], edi
        mov dword ptr ds : [eax+0x2C], ebx
        mov dword ptr ds : [eax+0x28], ebx
        mov dword ptr ds : [eax+0x24], ebx
        mov dword ptr ds : [eax+0x1C], ebx
        mov dword ptr ds : [eax+0x18], ebx
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x3C], ebx
        mov dword ptr ds : [eax+0x38], ebx
        mov dword ptr ds : [eax+0x34], ebx
        mov dword ptr ds : [eax+0x60], edi
        mov dword ptr ds : [eax+0x50], edi
        mov dword ptr ds : [eax+0x40], edi
        mov dword ptr ds : [eax+0x5C], ebx
        mov dword ptr ds : [eax+0x58], ebx
        mov dword ptr ds : [eax+0x54], ebx
        mov dword ptr ds : [eax+0x4C], ebx
        mov dword ptr ds : [eax+0x48], ebx
        mov dword ptr ds : [eax+0x44], ebx
        mov dword ptr ds : [eax+0x6C], ebx
        mov dword ptr ds : [eax+0x68], ebx
        mov dword ptr ds : [eax+0x64], ebx
        mov dword ptr ds : [eax], offset public_5dc1f8
        jmp public_51e221
        public_51e21f : nop
        xor eax, eax
        public_51e221 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x100], eax
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x108], eax
        mov dword ptr ds : [esi+0x104], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x51e100)
    }
}

#undef public_51e1ac
#undef public_51e1ae
#undef public_51e21f
#undef public_51e221
