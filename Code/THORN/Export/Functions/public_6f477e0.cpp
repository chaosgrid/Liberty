#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f438c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f477e0);

#define public_6f477ef _public_6f477ef
#define public_6f477f1 _public_6f477f1
#define public_6f47891 _public_6f47891
#define public_6f4789e _public_6f4789e
#define public_6f478a3 _public_6f478a3
#define public_6f478bd _public_6f478bd

PROC_DECLARE(0x6f477e0, internal_6f477e0, public_6f477e0);
extern "C" NAKED register_t __cdecl internal_6f477e0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        test ebp, ebp
        push esi
        push edi
        je public_6f477ef
        lea eax, ss:[ebp+0x28]
        jmp public_6f477f1
        public_6f477ef : nop
        xor eax, eax
        public_6f477f1 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        sub esp, 0x2C
        mov edi, esp
        mov ecx, 0xB
        mov esi, ebx
        push eax
        rep movsd
        call public_6f438c0
        xor eax, eax
        mov dword ptr ss : [ebp+0x28], 8
        mov dword ptr ss : [ebp+0x6C], eax
        mov ecx, dword ptr ds : [ebx]
        add esp, 0x30
        cmp ecx, 8
        jne public_6f478a3
        lea ecx, ds:[ebx+0x2C]
        mov esi, dword ptr ds : [ecx]
        lea edx, ss:[ebp+0x54]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ds : [ebx+0x38]
        mov dword ptr ss : [ebp+0x60], edx
        mov ecx, dword ptr ds : [ebx+0x3C]
        mov dword ptr ss : [ebp+0x64], ecx
        mov edx, dword ptr ds : [ebx+0x40]
        mov dword ptr ss : [ebp+0x68], edx
        mov esi, dword ptr ds : [ebx+0x44]
        cmp esi, eax
        je public_6f478bd
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push 1
        lea ebx, ss:[ebp+0x70]
        mov dword ptr ss : [esp+0x18], ecx
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_6f5a028]
        test al, al
        je public_6f47891
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [ebx+4]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ds : [eax+ecx], 0
        public_6f47891 : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_6f4789e
        mov ebx, dword ptr ds : [public_6f5a020]
        public_6f4789e : nop
        mov dword ptr ss : [ebp+0x6C], ebx
        jmp public_6f478bd
        public_6f478a3 : nop
        mov dword ptr ss : [ebp+0x5C], eax
        mov dword ptr ss : [ebp+0x58], eax
        mov dword ptr ss : [ebp+0x54], eax
        mov dword ptr ss : [ebp+0x60], eax
        mov dword ptr ss : [ebp+0x64], 1
        mov dword ptr ss : [ebp+0x68], 5
        public_6f478bd : nop
        mov eax, dword ptr ss : [ebp+0x2C]
        mov edx, dword ptr ss : [ebp+0x28]
        mov ecx, dword ptr ss : [ebp+0x40]
        pop edi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0x10], edx
        mov edx, dword ptr ss : [ebp+0x44]
        add ecx, eax
        mov eax, dword ptr ss : [ebp+0x48]
        pop esi
        mov dword ptr ss : [ebp+0x1C], ecx
        mov dword ptr ss : [ebp+0x14], edx
        mov dword ptr ss : [ebp+0x18], eax
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f477e0)
    }
}

#undef public_6f477ef
#undef public_6f477f1
#undef public_6f47891
#undef public_6f4789e
#undef public_6f478a3
#undef public_6f478bd
