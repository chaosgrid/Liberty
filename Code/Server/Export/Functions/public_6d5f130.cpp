#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d53360);
CLANG_FORWARD_PROC_SYMBOL(public_6d55bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5e1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5f130);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63dc0);

#define public_6d5f221 _public_6d5f221
#define public_6d5f229 _public_6d5f229
#define public_6d5f240 _public_6d5f240
#define public_6d5f26f _public_6d5f26f
#define public_6d5f2a5 _public_6d5f2a5
#define public_6d5f3b9 _public_6d5f3b9
#define public_6d5f3c6 _public_6d5f3c6

PROC_DECLARE(0x6d5f130, internal_6d5f130, public_6d5f130);
extern "C" NAKED register_t __cdecl internal_6d5f130()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d63dc0 @0x6d5f138*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63dc0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xF8
        push ebx
        push esi
        call public_6d5e1e0
        test al, al
        je public_6d5f2a5
        lea ecx, ss:[esp+0xA0]
        call public_6d55bc0
        xor ebx, ebx
        lea ecx, ss:[esp+0xB8]
        mov dword ptr ss : [esp+0x108], ebx
        call public_6d55bc0
        mov dword ptr ss : [esp+0x98], ebx
        mov byte ptr ss : [esp+0x9C], bl
        mov word ptr ss : [esp+0xD0], bx
        mov eax, dword ptr ss : [esp+0x110]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x108], 1
        mov dword ptr ss : [esp+0x88], ecx
        call dword ptr ds : [public_6d64848]
        shl eax, 3
        push eax
        call public_6d60012
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ss:[esp+0xC0]
        push ecx
        lea edx, ss:[esp+0xAC]
        push edx
        push eax
        mov dword ptr ss : [esp+0xAC], eax
        lea eax, ss:[esp+0xB0]
        push eax
        lea ecx, ss:[esp+0xAC]
        push ecx
        lea edx, ss:[esp+0xAC]
        push edx
        lea eax, ss:[esp+0xA8]
        push eax
        mov dword ptr ss : [esp+0x2C], ebx
        call dword ptr ds : [public_6d64844]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0x24
        cmp eax, ebx
        je public_6d5f221
        push eax
        lea ecx, ss:[esp+0xD4]
        push ecx
        call dword ptr ds : [public_6d64bcc]
        add esp, 8
        jmp public_6d5f229
        public_6d5f221 : nop
        mov word ptr ss : [esp+0xD0], bx
        public_6d5f229 : nop
        push ebx
        mov ecx, offset public_6d90260
        call public_6d53360
        mov esi, eax
        cmp esi, ebx
        je public_6d5f26f
        push edi
        nop 
        lea esp, ss:[esp]
        public_6d5f240 : nop
        mov eax, dword ptr ds : [esi+0x348]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea edi, ss:[esp+0x8C]
        push edi
        push eax
        call dword ptr ds : [edx+0x108]
        push esi
        mov ecx, offset public_6d90260
        call public_6d53360
        mov esi, eax
        cmp esi, ebx
        jne public_6d5f240
        pop edi
        public_6d5f26f : nop
        mov eax, dword ptr ss : [esp+0x98]
        push eax
        call public_6d5ffb0
        add esp, 4
        mov esi, dword ptr ds : [public_6d64694]
        lea ecx, ss:[esp+0xB8]
        mov dword ptr ss : [esp+0x108], 2
        call esi
        lea ecx, ss:[esp+0xA0]
        jmp public_6d5f3b9
        public_6d5f2a5 : nop
        mov esi, dword ptr ss : [esp+0x114]
        xor ebx, ebx
        cmp esi, ebx
        jbe public_6d5f3c6
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        cmp eax, ecx
        jae public_6d5f3c6
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        cmp dword ptr ds : [eax+ecx+0x348], ebx
        je public_6d5f3c6
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x31], bl
        mov byte ptr ss : [esp+0x32], bl
        mov byte ptr ss : [esp+0x33], bl
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov byte ptr ss : [esp+0x36], bl
        mov byte ptr ss : [esp+0x37], bl
        mov byte ptr ss : [esp+0x38], bl
        mov byte ptr ss : [esp+0x39], bl
        mov byte ptr ss : [esp+0x3A], bl
        mov byte ptr ss : [esp+0x3B], bl
        mov byte ptr ss : [esp+0x3C], bl
        mov byte ptr ss : [esp+0x3D], bl
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x108], 3
        call public_6d55bc0
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ss : [esp+0x24], bl
        mov word ptr ss : [esp+0x58], bx
        mov edx, dword ptr ss : [esp+0x110]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [public_6d90260]
        mov ecx, esi
        imul ecx, 0x418
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ecx+edx-0x100]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x114], 4
        call dword ptr ds : [public_6d64698]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        lea edx, ss:[esp+0x10]
        push edx
        push esi
        call dword ptr ds : [eax+0x108]
        mov esi, dword ptr ds : [public_6d64694]
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x108], 5
        call esi
        lea ecx, ss:[esp+0x28]
        public_6d5f3b9 : nop
        mov dword ptr ss : [esp+0x108], 0xFFFFFFFF
        call esi
        public_6d5f3c6 : nop
        mov ecx, dword ptr ss : [esp+0x100]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x6d5f130)
    }
}

#undef public_6d5f221
#undef public_6d5f229
#undef public_6d5f240
#undef public_6d5f26f
#undef public_6d5f2a5
#undef public_6d5f3b9
#undef public_6d5f3c6
