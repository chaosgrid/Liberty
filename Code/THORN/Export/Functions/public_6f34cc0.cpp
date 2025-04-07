#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22500);
CLANG_FORWARD_PROC_SYMBOL(public_6f34a10);
CLANG_FORWARD_PROC_SYMBOL(public_6f35cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f35e40);
CLANG_FORWARD_PROC_SYMBOL(public_6f36050);
CLANG_FORWARD_PROC_SYMBOL(public_6f36420);
CLANG_FORWARD_PROC_SYMBOL(public_6f36460);
CLANG_FORWARD_PROC_SYMBOL(public_6f364c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58a28);

#define public_6f34d43 _public_6f34d43
#define public_6f34d50 _public_6f34d50
#define public_6f34dad _public_6f34dad
#define public_6f34de0 _public_6f34de0
#define public_6f34e31 _public_6f34e31
#define public_6f34e52 _public_6f34e52
#define public_6f34e56 _public_6f34e56
#define public_6f34eb5 _public_6f34eb5
#define public_6f34ec0 _public_6f34ec0
#define public_6f34ee7 _public_6f34ee7
#define public_6f34eeb _public_6f34eeb
#define public_6f34f11 _public_6f34f11

PROC_DECLARE(0x6f34cc0, internal_6f34cc0, public_6f34cc0);
extern "C" NAKED register_t __cdecl internal_6f34cc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58a28 @0x6f34cc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58a28
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        push ebx
        mov ebx, dword ptr ss : [esp+0x5C]
        push esi
        or eax, 0xFFFFFFFF
        xor esi, esi
        cmp ebx, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_6f34f11
        mov cl, byte ptr ss : [esp+0x5C]
        mov al, byte ptr ss : [esp+0x5C]
        mov byte ptr ss : [esp+0x39], cl
        push edi
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x64], ebx
        mov byte ptr ss : [esp+0xC], 0
        mov byte ptr ss : [esp+0x3C], al
        mov byte ptr ss : [esp+0x48], 0
        call public_6f36460
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6f5ff7c
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_6f5ff7c @0x6f34d27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ff7c
        push ebx
        mov dword ptr ss : [esp+0x64], esi
        call dword ptr ds : [public_6f5a088]
        add esp, 0xC
        test eax, eax
        jne public_6f34d43
        mov byte ptr ss : [esp+0xC], 1
        public_6f34d43 : nop
        mov edi, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ss : [esp+0x24]
        nop 
        lea esp, ss:[esp]
        public_6f34d50 : nop
        mov ecx, dword ptr ss : [esp+0x60]
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x68]
        push eax
        add ecx, 0xFFFFFFF8
        call public_6f34a10
        test al, al
        je public_6f34dad
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], edi
        call public_6f35e40
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        add edx, 0x10
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        inc esi
        public_6f34dad : nop
        mov eax, dword ptr ss : [esp+0x64]
        test eax, eax
        jne public_6f34d50
        cmp esi, 1
        jbe public_6f34e52
        lea ecx, ds:[esi+esi*2]
        shl ecx, 2
        push ecx
        call public_6f57e9c
        add esp, 4
        xor edi, edi
        test esi, esi
        mov dword ptr ss : [esp+0x64], eax
        jbe public_6f34e31
        mov ebx, dword ptr ss : [esp+0x28]
        push ebp
        mov ebp, eax
        mov edi, edi
        public_6f34de0 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x34], edx
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], ebx
        call public_6f35e40
        mov eax, dword ptr ss : [esp+0x1C]
        add eax, 0x10
        mov edx, dword ptr ds : [eax]
        mov ecx, ebp
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        inc edi
        add ebp, 0xC
        cmp edi, esi
        mov dword ptr ds : [ecx+8], eax
        jb public_6f34de0
        mov eax, dword ptr ss : [esp+0x68]
        pop ebp
        public_6f34e31 : nop
        mov edi, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ds : [edi-8]
        push esi
        lea ecx, ds:[edi-8]
        push eax
        push ecx
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edi+4]
        push eax
        call public_6f22500
        xor edi, edi
        jmp public_6f34e56
        public_6f34e52 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_6f34e56 : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x4C]
        test edx, edx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ss : [esp+0x60], ecx
        je public_6f34eb5
        mov edx, ecx
        cmp ecx, edx
        jne public_6f34eb5
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_6f36420
        mov eax, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ds : [eax+8], eax
        call public_6f35cc0
        jmp public_6f34ee7
        public_6f34eb5 : nop
        cmp ecx, eax
        je public_6f34eeb
        lea esp, ss:[esp]
        public_6f34ec0 : nop
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x68]
        call public_6f364c0
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x44]
        call public_6f36050
        cmp dword ptr ss : [esp+0x60], esi
        jne public_6f34ec0
        public_6f34ee7 : nop
        mov eax, dword ptr ss : [esp+0x40]
        public_6f34eeb : nop
        push eax
        call public_6f57e26
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x54], 0
        call public_6f57e26
        add esp, 8
        mov eax, edi
        pop edi
        public_6f34f11 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x6f34cc0)
    }
}

#undef public_6f34d43
#undef public_6f34d50
#undef public_6f34dad
#undef public_6f34de0
#undef public_6f34e31
#undef public_6f34e52
#undef public_6f34e56
#undef public_6f34eb5
#undef public_6f34ec0
#undef public_6f34ee7
#undef public_6f34eeb
#undef public_6f34f11
