#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_6243ff0);
CLANG_FORWARD_PROC_SYMBOL(public_62446c0);
CLANG_FORWARD_PROC_SYMBOL(public_6244710);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a9dc);

#define public_6244057 _public_6244057
#define public_6244087 _public_6244087
#define public_6244089 _public_6244089
#define public_62440c9 _public_62440c9
#define public_62440cb _public_62440cb

PROC_DECLARE(0x6243ff0, internal_6243ff0, public_6243ff0);
extern "C" NAKED register_t __cdecl internal_6243ff0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a9dc @0x6243ff2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a9dc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x1C], edi
        call public_623f7b0
        mov al, byte ptr ss : [esp+0x13]
        xor ebx, ebx
        push 0xC
        mov dword ptr ss : [esp+0x30], ebx
        mov byte ptr ds : [edi+0x4C], al
        call public_624612c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [edi+0x50], eax
        mov dword ptr ds : [edi+0x54], ebx
        mov dword ptr ds : [edi+0x58], ebx
        mov dword ptr ds : [edi], offset public_624fb78
        mov eax, dword ptr ds : [edi+0x58]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x2C], 2
        je public_6244057
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x58], ebx
        public_6244057 : nop
        push 0x20
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebp
        cmp ebp, ebx
        mov byte ptr ss : [esp+0x2C], 3
        je public_6244087
        mov ecx, ebp
        call public_6244710
        mov dword ptr ss : [ebp], offset public_624bb18
        mov dword ptr ss : [ebp+0x1C], 1
        jmp public_6244089
        public_6244087 : nop
        xor ebp, ebp
        public_6244089 : nop
        mov dword ptr ss : [esp+0x18], ebx
        push 0x2C
        mov byte ptr ss : [esp+0x30], 4
        mov dword ptr ss : [esp+0x18], 0x3F800000
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x2C], 5
        je public_62440c9
        mov ecx, esi
        call public_62446c0
        mov dword ptr ds : [esi], offset public_624bbf0
        mov dword ptr ds : [esi+0x28], 1
        jmp public_62440cb
        public_62440c9 : nop
        xor esi, esi
        public_62440cb : nop
        mov edx, dword ptr ds : [esi]
        push 4
        push esi
        mov byte ptr ss : [esp+0x34], 4
        call dword ptr ds : [edx+0x34]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebx
        push esi
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [ebp]
        push esi
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x24], esi
        call dword ptr ds : [edx+0x14]
        mov dword ptr ds : [edi+0x58], ebp
        mov eax, dword ptr ds : [esi]
        push esi
        mov byte ptr ss : [esp+0x30], 2
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6243ff0)
    }
}

#undef public_6244057
#undef public_6244087
#undef public_6244089
#undef public_62440c9
#undef public_62440cb
