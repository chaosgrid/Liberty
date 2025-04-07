#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f580d4);
CLANG_FORWARD_PROC_SYMBOL(public_6f5834e);

#define public_6f580ea _public_6f580ea
#define public_6f58112 _public_6f58112
#define public_6f58116 _public_6f58116
#define public_6f5813c _public_6f5813c
#define public_6f58153 _public_6f58153
#define public_6f58164 _public_6f58164
#define public_6f58169 _public_6f58169
#define public_6f58179 _public_6f58179
#define public_6f5817c _public_6f5817c

PROC_DECLARE(0x6f580d4, internal_6f580d4, public_6f580d4);
extern "C" NAKED register_t __cdecl internal_6f580d4()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6f580ea
        cmp dword ptr ds : [public_6f61e30], eax
        jle public_6f58112
        dec dword ptr ds : [public_6f61e30]
        public_6f580ea : nop
        mov ecx, dword ptr ds : [public_6f5a17c]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6f61e34], ecx
        jne public_6f5813c
        push 0x80
        call dword ptr ds : [public_6f5a178]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6f61e40], eax
        jne public_6f58116
        public_6f58112 : nop
        xor eax, eax
        jmp public_6f5817c
        public_6f58116 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6f61e40]
/*FIXUP push offset public_6f5e008 @0x6f5811e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e008
/*FIXUP push offset public_6f5e000 @0x6f58123*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e000
        mov dword ptr ds : [public_6f61e3c], eax
        call public_6f5834e
        inc dword ptr ds : [public_6f61e30]
        pop ecx
        pop ecx
        jmp public_6f58179
        public_6f5813c : nop
        test eax, eax
        jne public_6f58179
        mov eax, dword ptr ds : [public_6f61e40]
        test eax, eax
        je public_6f58179
        mov ecx, dword ptr ds : [public_6f61e3c]
        push esi
        lea esi, ds:[ecx-4]
        public_6f58153 : nop
        cmp esi, eax
        jb public_6f58169
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6f58164
        call ecx
        mov eax, dword ptr ds : [public_6f61e40]
        public_6f58164 : nop
        sub esi, 4
        jmp public_6f58153
        public_6f58169 : nop
        push eax
        call dword ptr ds : [public_6f5a090]
        and dword ptr ds : [public_6f61e40], 0
        pop ecx
        pop esi
        public_6f58179 : nop
        push 1
        pop eax
        public_6f5817c : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6f580d4)
    }
}

#undef public_6f580ea
#undef public_6f58112
#undef public_6f58116
#undef public_6f5813c
#undef public_6f58153
#undef public_6f58164
#undef public_6f58169
#undef public_6f58179
#undef public_6f5817c
