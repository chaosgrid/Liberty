#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d18ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b350);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61eea);

#define public_6d18f7d _public_6d18f7d
#define public_6d18fda _public_6d18fda
#define public_6d19018 _public_6d19018
#define public_6d1906e _public_6d1906e
#define public_6d19085 _public_6d19085
#define public_6d190a0 _public_6d190a0

PROC_DECLARE(0x6d18ea0, internal_6d18ea0, public_6d18ea0);
extern "C" NAKED register_t __cdecl internal_6d18ea0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61eea @0x6d18ea2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61eea
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x834
        mov ecx, dword ptr ss : [esp+0x84C]
        push ebx
        push esi
        push edi
        lea eax, ss:[esp+0x85C]
        push eax
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        call dword ptr ds : [public_6d64c58]
        mov al, byte ptr ss : [esp+0x2B]
        add esp, 0xC
        xor ebx, ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x18], al
        call public_6cfc340
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ebx
        mov ecx, dword ptr ss : [esp+0x850]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x84C], ebx
        call dword ptr ds : [public_6d64804]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x848], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x850], 2
        call public_6cfc340
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0xC]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6d1b4a0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x848], 1
        je public_6d18f7d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], ebx
        public_6d18f7d : nop
        push ebp
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x84C], bl
        call dword ptr ds : [public_6d64800]
        push 0xFFFFFFFF
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_6d647fc]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x84C], 3
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0xC
        mov byte ptr ss : [esp+0x850], 4
        mov ebp, eax
        call public_6d60012
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [eax], ebp
        pop ebp
        jne public_6d18fda
        mov edi, eax
        public_6d18fda : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0xC]
        push ecx
        add eax, 8
        push eax
        call public_6d1b4a0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x848], 3
        je public_6d19018
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xC], ebx
        public_6d19018 : nop
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x848], bl
        call dword ptr ds : [public_6d647f8]
        lea eax, ss:[esp+0x20]
        push eax
        push 0x400
/*FIXUP push offset public_6d8f1b8 @0x6d19033*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8f1b8
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, offset public_6d8f5b8
        call dword ptr ds : [public_6d647f4]
        test al, al
        je public_6d1906e
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [public_6d8fb18]
        mov edx, dword ptr ds : [ecx]
/*FIXUP push offset public_6d8f1b8 @0x6d19058*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8f1b8
        push eax
        mov eax, dword ptr ds : [public_6d8f5f0]
        push eax
        mov eax, dword ptr ss : [esp+0x860]
        push eax
        call dword ptr ds : [edx]
        public_6d1906e : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x848], 0xFFFFFFFF
        mov edi, eax
        je public_6d190a0
        public_6d19085 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6d1b350
        cmp esi, edi
        jne public_6d19085
        mov eax, dword ptr ss : [esp+0x14]
        public_6d190a0 : nop
        push eax
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x844]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x840
        ret 
        UNREACHABLE_TRAP(0x6d18ea0)
    }
}

#undef public_6d18f7d
#undef public_6d18fda
#undef public_6d19018
#undef public_6d1906e
#undef public_6d19085
#undef public_6d190a0
