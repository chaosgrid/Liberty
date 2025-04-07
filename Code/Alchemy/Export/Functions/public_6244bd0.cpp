#include "Alchemy-PCH.h"


#define public_6244c80 _public_6244c80
#define public_6244caa _public_6244caa
#define public_6244cb1 _public_6244cb1
#define public_6244cd9 _public_6244cd9
#define public_6244cdd _public_6244cdd
#define public_6244d12 _public_6244d12
#define public_6244d14 _public_6244d14
#define public_6244da1 _public_6244da1
#define public_6244da8 _public_6244da8
#define public_6244dd1 _public_6244dd1
#define public_6244dd5 _public_6244dd5

PROC_DECLARE(0x6244bd0, internal_6244bd0, public_6244bd0);
extern "C" NAKED register_t __cdecl internal_6244bd0()
{
    __asm
    {
        sub esp, 0x140
        mov al, byte ptr ss : [esp+0x148]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [public_6257680]
        add al, 0x30
        push ebp
        mov byte ptr ds : [ecx+1], al
        mov edx, dword ptr ds : [public_6257680]
        mov ecx, dword ptr ds : [public_625767c]
        push esi
        mov al, byte ptr ds : [edx+1]
        mov esi, dword ptr ss : [esp+0x150]
        push edi
        mov byte ptr ds : [ecx+1], al
        mov edx, dword ptr ds : [public_625767c]
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x1C], offset public_6256234
        rep stosd
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        mov dword ptr ss : [esp+0x30], 0x80000000
        mov dword ptr ss : [esp+0x34], 1
        mov dword ptr ss : [esp+0x3C], 3
        mov dword ptr ss : [esp+0x40], 0x8000080
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x20], 0x34
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        xor edi, edi
        call dword ptr ds : [eax+0x7C]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_6244cb1
        mov edx, dword ptr ds : [esi]
        push edi
        push ebp
        push esi
        call dword ptr ds : [edx+0x28]
        cmp eax, 0x103
        mov edi, eax
        jb public_6244c80
        mov edi, 0x103
        public_6244c80 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push 0
        push ecx
        lea edx, ss:[esp+0x54]
        push edi
        push edx
        push ebp
        push esi
        call dword ptr ds : [eax+0x14]
        test eax, eax
        je public_6244cd9
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6244cd9
        mov edi, 1
        mov byte ptr ss : [esp+eax+0x4C], 0
        public_6244caa : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [eax+0x10]
        public_6244cb1 : nop
        neg edi
        sbb edi, edi
        and edi, 0x7FFFBFFB
        add edi, 0x80004005
        jns public_6244cdd
        pop edi
        pop esi
        mov dword ptr ds : [ebx], 0
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x140
        ret 8
        public_6244cd9 : nop
        xor edi, edi
        jmp public_6244caa
        public_6244cdd : nop
        lea ecx, ss:[esp+0x4C]
        push ecx
        call dword ptr ds : [public_624b00c]
        mov edi, eax
        mov eax, dword ptr ds : [ebx]
        add esp, 4
        cmp eax, edi
        je public_6244d14
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, 0xFFFFFFFF
        je public_6244d12
        mov eax, dword ptr ds : [public_6257bbc]
        test eax, eax
        je public_6244d12
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x40]
        mov dword ptr ds : [ebx+4], 0xFFFFFFFF
        public_6244d12 : nop
        mov dword ptr ds : [ebx], edi
        public_6244d14 : nop
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x1C], offset public_6256234
        rep stosd
        mov eax, dword ptr ds : [public_6257680]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x28], 0x80000000
        push edx
        push esi
        mov dword ptr ss : [esp+0x34], 1
        mov dword ptr ss : [esp+0x3C], 3
        mov dword ptr ss : [esp+0x40], 0x8000080
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x20], 0x34
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        xor edi, edi
        call dword ptr ds : [ecx+0x7C]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_6244da8
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push edi
        push ecx
        lea edx, ss:[esp+0x1C]
        push 4
        push edx
        push ebp
        push esi
        call dword ptr ds : [eax+0x14]
        test eax, eax
        je public_6244dd1
        cmp dword ptr ss : [esp+0x10], 4
        jne public_6244dd1
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, 1
        mov dword ptr ds : [ebx+0x20], eax
        public_6244da1 : nop
        mov ecx, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [ecx+0x10]
        public_6244da8 : nop
        neg edi
        sbb edi, edi
        and edi, 0x7FFFBFFB
        add edi, 0x80004005
        jns public_6244dd5
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x20], 0
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x140
        ret 8
        public_6244dd1 : nop
        xor edi, edi
        jmp public_6244da1
        public_6244dd5 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x140
        ret 8
        UNREACHABLE_TRAP(0x6244bd0)
    }
}

#undef public_6244c80
#undef public_6244caa
#undef public_6244cb1
#undef public_6244cd9
#undef public_6244cdd
#undef public_6244d12
#undef public_6244d14
#undef public_6244da1
#undef public_6244da8
#undef public_6244dd1
#undef public_6244dd5
