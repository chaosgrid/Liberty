#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2aa0);

#define public_4a2ac6 _public_4a2ac6
#define public_4a2ae0 _public_4a2ae0
#define public_4a2b14 _public_4a2b14
#define public_4a2b2b _public_4a2b2b
#define public_4a2b51 _public_4a2b51
#define public_4a2b63 _public_4a2b63
#define public_4a2bb3 _public_4a2bb3
#define public_4a2bdd _public_4a2bdd
#define public_4a2be4 _public_4a2be4
#define public_4a2bff _public_4a2bff
#define public_4a2c13 _public_4a2c13
#define public_4a2c31 _public_4a2c31
#define public_4a2c43 _public_4a2c43

PROC_DECLARE(0x4a2aa0, internal_4a2aa0, public_4a2aa0);
extern "C" NAKED register_t __cdecl internal_4a2aa0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        sub esp, 0xD28
        test al, al
        push ebx
        push ebp
        push esi
        push edi
        je public_4a2b51
        call dword ptr ds : [public_5c63ec]
        mov ebx, eax
        test ebx, ebx
        je public_4a2c43
        public_4a2ac6 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_4a2b14
        lea ebx, ds:[ebx]
        public_4a2ae0 : nop
        lea esi, ss:[ebp+8]
        mov ecx, 0x303
        lea edi, ss:[esp+0x12C]
        rep movsd
        mov esi, dword ptr ss : [esp+0xD34]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        cmp eax, dword ptr ss : [esp+0xD3C]
        je public_4a2b2b
        mov eax, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [eax+4]
        jne public_4a2ae0
        public_4a2b14 : nop
        call dword ptr ds : [public_5c63e8]
        mov ebx, eax
        test ebx, ebx
        jne public_4a2ac6
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xD28
        ret 
        public_4a2b2b : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax]
        mov dword ptr ds : [public_672084], esi
        mov dword ptr ds : [public_672088], edi
        jmp public_4a2c31
        public_4a2b51 : nop
        call dword ptr ds : [public_5c63ec]
        mov esi, eax
        xor edi, edi
        cmp esi, edi
        je public_4a2c43
        public_4a2b63 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        cmp eax, dword ptr ss : [esp+0xD3C]
        mov ecx, esi
        je public_4a2bff
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x70], edi
        mov byte ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0xA0], edi
        mov byte ptr ss : [esp+0xA4], 0
        mov dword ptr ss : [esp+0xE4], edi
        mov byte ptr ss : [esp+0xE8], 0
        call dword ptr ds : [eax+0x3C]
        mov ebx, eax
        cmp ebx, edi
        jbe public_4a2be4
        public_4a2bb3 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x40]
        test al, al
        je public_4a2bdd
        lea ecx, ss:[esp+0x18]
        push ecx
        call dword ptr ds : [public_5c6020]
        mov ecx, dword ptr ss : [esp+0xD40]
        add esp, 4
        cmp eax, ecx
        je public_4a2c13
        public_4a2bdd : nop
        inc edi
        cmp edi, ebx
        jb public_4a2bb3
        xor edi, edi
        public_4a2be4 : nop
        call dword ptr ds : [public_5c63e8]
        mov esi, eax
        cmp esi, edi
        jne public_4a2b63
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xD28
        ret 
        public_4a2bff : nop
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [public_6720c4], eax
        pop ebx
        add esp, 0xD28
        ret 
        public_4a2c13 : nop
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ss : [esp+0x58]
        mov ebx, dword ptr ss : [esp+0x5C]
        mov ebp, dword ptr ss : [esp+0x60]
        mov ecx, esi
        call dword ptr ds : [eax]
        mov dword ptr ds : [public_672084], edi
        mov dword ptr ds : [public_672088], ebx
        public_4a2c31 : nop
        mov dword ptr ds : [public_67208c], ebp
        mov byte ptr ds : [public_6720c8], 1
        mov dword ptr ds : [public_6720c4], eax
        public_4a2c43 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xD28
        ret 
        UNREACHABLE_TRAP(0x4a2aa0)
    }
}

#undef public_4a2ac6
#undef public_4a2ae0
#undef public_4a2b14
#undef public_4a2b2b
#undef public_4a2b51
#undef public_4a2b63
#undef public_4a2bb3
#undef public_4a2bdd
#undef public_4a2be4
#undef public_4a2bff
#undef public_4a2c13
#undef public_4a2c31
#undef public_4a2c43
