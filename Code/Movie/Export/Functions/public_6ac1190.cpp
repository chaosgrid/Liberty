#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1190);
CLANG_FORWARD_PROC_SYMBOL(public_6acf37a);

#define public_6ac11f3 _public_6ac11f3
#define public_6ac11ff _public_6ac11ff
#define public_6ac1256 _public_6ac1256
#define public_6ac1264 _public_6ac1264
#define public_6ac1294 _public_6ac1294
#define public_6ac129e _public_6ac129e
#define public_6ac12ab _public_6ac12ab
#define public_6ac12c8 _public_6ac12c8
#define public_6ac12d6 _public_6ac12d6
#define public_6ac12e0 _public_6ac12e0

PROC_DECLARE(0x6ac1190, internal_6ac1190, public_6ac1190);
extern "C" NAKED register_t __cdecl internal_6ac1190()
{
    __asm
    {
        sub esp, 0x50
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x5C]
        mov esi, ecx
        cmp edi, 0xF
        ja public_6ac129e
        je public_6ac1264
        mov eax, edi
        dec eax
        je public_6ac11f3
        sub eax, 4
        jne public_6ac12ab
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6ac12ab
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+8]
        push eax
        push ecx
        call dword ptr ds : [public_6ada17c]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+8]
        push 4
        push edx
        push eax
        push 0
        push 0
        push 0
        push ecx
        call dword ptr ds : [public_6ada1b0]
        jmp public_6ac12ab
        public_6ac11f3 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        jne public_6ac11ff
        mov eax, offset public_6ada238
        public_6ac11ff : nop
        push eax
        push 0x5200810A
        push 0
        call dword ptr ds : [public_6ada064]
        mov edx, dword ptr ds : [esi+4]
        push eax
        push edx
        call public_6acf37a
        add esp, 0x10
        mov dword ptr ds : [esi+8], eax
        test eax, eax
        je public_6ac1256
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+8]
        push eax
        push ecx
        call dword ptr ds : [public_6ada17c]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+8]
        push 4
        push edx
        push eax
        push 0
        push 0
        push 0
        push ecx
        call dword ptr ds : [public_6ada1b0]
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x50
        ret 0xC
        public_6ac1256 : nop
        mov byte ptr ds : [esi+0xD], 1
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x50
        ret 0xC
        public_6ac1264 : nop
        mov edx, dword ptr ds : [esi+4]
        push 0
        push 0
        push edx
        call dword ptr ds : [public_6ada168]
        test eax, eax
        je public_6ac1294
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        call dword ptr ds : [public_6ada1b4]
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [public_6ada1a4]
        public_6ac1294 : nop
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x50
        ret 0xC
        public_6ac129e : nop
        cmp edi, 0x14
        je public_6ac12e0
        cmp edi, 0x4C8
        je public_6ac12c8
        public_6ac12ab : nop
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        push edx
        push edi
        push eax
        call dword ptr ds : [public_6ada170]
        pop edi
        pop esi
        add esp, 0x50
        ret 0xC
        public_6ac12c8 : nop
        cmp dword ptr ss : [esp+0x64], 0x20D
        jne public_6ac12d6
        mov byte ptr ds : [esi+0xC], 1
        public_6ac12d6 : nop
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x50
        ret 0xC
        public_6ac12e0 : nop
        pop edi
        mov eax, 1
        pop esi
        add esp, 0x50
        ret 0xC
        UNREACHABLE_TRAP(0x6ac1190)
    }
}

#undef public_6ac11f3
#undef public_6ac11ff
#undef public_6ac1256
#undef public_6ac1264
#undef public_6ac1294
#undef public_6ac129e
#undef public_6ac12ab
#undef public_6ac12c8
#undef public_6ac12d6
#undef public_6ac12e0
