#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_437f70);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_477ab0);
CLANG_FORWARD_PROC_SYMBOL(public_477bf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc048);

#define public_477c62 _public_477c62
#define public_477c71 _public_477c71
#define public_477c7a _public_477c7a
#define public_477c95 _public_477c95
#define public_477ca0 _public_477ca0
#define public_477ccd _public_477ccd
#define public_477ce8 _public_477ce8

PROC_DECLARE(0x477bf0, internal_477bf0, public_477bf0);
extern "C" NAKED register_t __cdecl internal_477bf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc048 @0x477bf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc048
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov eax, dword ptr ds : [public_66873c]
        push ebx
        push esi
        push edi
        push eax
        mov ecx, offset public_668708
        call public_43a510
        mov esi, eax
        mov al, byte ptr ss : [esp+0x28]
        push 0xC
        mov byte ptr ss : [esp+0x10], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor edi, edi
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], edi
        push 3
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], edi
        call public_437f70
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [ecx]
        mov eax, esi
        xor edx, edx
        cmp eax, ecx
        je public_477c71
        mov ebx, dword ptr ss : [esp+0x28]
        public_477c62 : nop
        cmp edx, ebx
        je public_477ce8
        mov eax, dword ptr ds : [eax]
        inc edx
        cmp eax, ecx
        jne public_477c62
        public_477c71 : nop
        cmp dword ptr ss : [esp+0x14], edi
        jbe public_477c95
        mov eax, dword ptr ds : [esi+8]
        public_477c7a : nop
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        push edx
        push eax
        push ecx
        push 2
        call public_477ab0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0x10
        public_477c95 : nop
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        mov edi, ecx
        je public_477ccd
        lea ecx, ds:[ecx]
        public_477ca0 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x14], ecx
        jne public_477ca0
        mov ecx, dword ptr ss : [esp+0x10]
        public_477ccd : nop
        push ecx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        public_477ce8 : nop
        mov eax, dword ptr ds : [eax+8]
        jmp public_477c7a
        UNREACHABLE_TRAP(0x477bf0)
    }
}

#undef public_477c62
#undef public_477c71
#undef public_477c7a
#undef public_477c95
#undef public_477ca0
#undef public_477ccd
#undef public_477ce8
