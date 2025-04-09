#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5110);
CLANG_FORWARD_PROC_SYMBOL(public_540fc0);
CLANG_FORWARD_PROC_SYMBOL(public_541890);

#define public_4c5120 _public_4c5120
#define public_4c5134 _public_4c5134
#define public_4c513a _public_4c513a
#define public_4c514c _public_4c514c
#define public_4c5185 _public_4c5185
#define public_4c51dc _public_4c51dc
#define public_4c51fb _public_4c51fb
#define public_4c51fd _public_4c51fd
#define public_4c520e _public_4c520e
#define public_4c5217 _public_4c5217
#define public_4c5219 _public_4c5219
#define public_4c5229 _public_4c5229
#define public_4c5266 _public_4c5266
#define public_4c5285 _public_4c5285
#define public_4c5287 _public_4c5287
#define public_4c5298 _public_4c5298
#define public_4c52a1 _public_4c52a1
#define public_4c52a3 _public_4c52a3
#define public_4c52b3 _public_4c52b3

PROC_DECLARE(0x4c5110, internal_4c5110, public_4c5110);
extern "C" NAKED register_t __cdecl internal_4c5110()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        sub esp, 8
        test eax, eax
        je public_4c5134
        lea esp, ss:[esp]
        public_4c5120 : nop
        movzx ecx, word ptr ds : [eax+8]
        cmp ecx, 0x42
        je public_4c514c
        cmp ecx, 0x52
        je public_4c513a
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_4c5120
        public_4c5134 : nop
        xor eax, eax
        add esp, 8
        ret 
        public_4c513a : nop
        mov eax, dword ptr ds : [eax+4]
        push 0
        push eax
        call public_541890
        add esp, 8
        add esp, 8
        ret 
        public_4c514c : nop
        push ebp
        mov ebp, dword ptr ds : [public_5c62a8]
        push esi
        mov esi, dword ptr ds : [eax+4]
        cmp dword ptr ds : [public_673394], esi
        je public_4c5229
        mov eax, dword ptr ds : [public_6728d8]
        test eax, eax
        mov dword ptr ds : [public_673394], esi
        mov dword ptr ds : [public_6728e0], 0
        je public_4c5185
        push 0
        mov ecx, offset public_6728d8
        call ebp
        public_4c5185 : nop
        push esi
        mov byte ptr ds : [public_673398], 0
        call dword ptr ds : [public_5c6090]
        add esp, 4
        test eax, eax
        je public_4c5229
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        cmp eax, dword ptr ds : [public_673354]
        mov dword ptr ds : [public_6728e0], eax
        jne public_4c52b3
        lea eax, ss:[esp+8]
        push eax
        mov byte ptr ds : [public_673398], 1
        mov dword ptr ss : [esp+0xC], 2
        call public_540fc0
        add esp, 4
        test eax, eax
        je public_4c5229
        mov edx, dword ptr ds : [public_673394]
        public_4c51dc : nop
        lea ecx, ds:[eax+0xC]
        test ecx, ecx
        je public_4c51fb
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_4c51fb
        mov esi, dword ptr ds : [ecx+0x4C]
        and esi, 0x303
        cmp esi, 0x303
        je public_4c51fd
        public_4c51fb : nop
        xor ecx, ecx
        public_4c51fd : nop
        cmp dword ptr ds : [ecx+0x160], edx
        je public_4c520e
        mov eax, dword ptr ds : [eax+0x14]
        test eax, eax
        jne public_4c51dc
        jmp public_4c5229
        public_4c520e : nop
        test eax, eax
        je public_4c5217
        add eax, 8
        jmp public_4c5219
        public_4c5217 : nop
        xor eax, eax
        public_4c5219 : nop
        cmp eax, dword ptr ds : [public_6728d8]
        je public_4c5229
        push eax
        mov ecx, offset public_6728d8
        call ebp
        public_4c5229 : nop
        mov ecx, dword ptr ds : [public_6728e0]
        cmp ecx, dword ptr ds : [public_673354]
        jne public_4c52b3
        mov al, byte ptr ds : [public_673398]
        test al, al
        jne public_4c52b3
        lea edx, ss:[esp+0xC]
        push edx
        mov byte ptr ds : [public_673398], 1
        mov dword ptr ss : [esp+0x10], 2
        call public_540fc0
        add esp, 4
        test eax, eax
        je public_4c52b3
        mov edx, dword ptr ds : [public_673394]
        public_4c5266 : nop
        lea ecx, ds:[eax+0xC]
        test ecx, ecx
        je public_4c5285
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_4c5285
        mov esi, dword ptr ds : [ecx+0x4C]
        and esi, 0x303
        cmp esi, 0x303
        je public_4c5287
        public_4c5285 : nop
        xor ecx, ecx
        public_4c5287 : nop
        cmp dword ptr ds : [ecx+0x160], edx
        je public_4c5298
        mov eax, dword ptr ds : [eax+0x14]
        test eax, eax
        jne public_4c5266
        jmp public_4c52b3
        public_4c5298 : nop
        test eax, eax
        je public_4c52a1
        add eax, 8
        jmp public_4c52a3
        public_4c52a1 : nop
        xor eax, eax
        public_4c52a3 : nop
        cmp eax, dword ptr ds : [public_6728d8]
        je public_4c52b3
        push eax
        mov ecx, offset public_6728d8
        call ebp
        public_4c52b3 : nop
        mov eax, dword ptr ds : [public_6728d8]
        test eax, eax
        pop esi
        pop ebp
        je public_4c5134
        add eax, 0xFFFFFFF8
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4c5110)
    }
}

#undef public_4c5120
#undef public_4c5134
#undef public_4c513a
#undef public_4c514c
#undef public_4c5185
#undef public_4c51dc
#undef public_4c51fb
#undef public_4c51fd
#undef public_4c520e
#undef public_4c5217
#undef public_4c5219
#undef public_4c5229
#undef public_4c5266
#undef public_4c5285
#undef public_4c5287
#undef public_4c5298
#undef public_4c52a1
#undef public_4c52a3
#undef public_4c52b3
