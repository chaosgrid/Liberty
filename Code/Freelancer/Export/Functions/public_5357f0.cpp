#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5357f0);
CLANG_FORWARD_PROC_SYMBOL(public_535b80);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_5358b5 _public_5358b5
#define public_5358d7 _public_5358d7
#define public_5358ef _public_5358ef
#define public_5358f1 _public_5358f1
#define public_535959 _public_535959
#define public_535970 _public_535970

PROC_DECLARE(0x5357f0, internal_5357f0, public_5357f0);
extern "C" NAKED register_t __cdecl internal_5357f0()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_5c6368]
        mov dx, word ptr ds : [ecx]
        mov cx, word ptr ss : [esp+0x30]
        xor eax, eax
        push edi
        mov dword ptr ss : [esp+0x28], eax
        mov word ptr ss : [esp+0x24], cx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x20]
        mov word ptr ss : [esp+0x1C], dx
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        lea ecx, ds:[esi+0xCC]
        xor ebp, ebp
        mov dword ptr ss : [esp+0x34], edx
        call public_535b80
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ebx+0x10]
        cmp eax, ebp
        je public_535970
        push ebp
        push eax
        call public_5416c0
        mov edi, eax
        add esp, 8
        cmp edi, ebp
        je public_535970
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [public_5c6368]
        cmp cx, word ptr ds : [eax]
        jne public_5358d7
        xor edx, edx
        mov dword ptr ss : [esp+0x10], ebp
        mov dx, word ptr ds : [eax]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], edx
        call dword ptr ds : [eax+0x74]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x78]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebp
        je public_5358b5
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ebp, eax
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        cmp ebp, eax
        jne public_5358b5
        mov cx, word ptr ss : [esp+0x14]
        cmp cx, word ptr ds : [ebx+0x14]
        je public_535970
        public_5358b5 : nop
        mov edx, dword ptr ds : [esi+4]
        xor eax, eax
        mov ax, word ptr ds : [ebx+0x14]
        push 0
        lea ecx, ds:[esi+4]
        push eax
        push edi
        lea eax, ss:[esp+0x40]
        push eax
        call dword ptr ds : [edx+0x44]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_5358d7 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebp
        je public_5358ef
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_5358f1
        public_5358ef : nop
        xor eax, eax
        public_5358f1 : nop
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c6574]
        cmp eax, ebp
        je public_535970
        push eax
        call dword ptr ds : [public_5c6544]
        mov ecx, dword ptr ds : [public_5c6368]
        xor edx, edx
        mov dword ptr ss : [esp+0x14], ebp
        mov dx, word ptr ds : [ecx]
        add esp, 4
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], edx
        je public_535970
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, eax
        call dword ptr ds : [public_5c6994]
        cmp dword ptr ss : [esp+0x10], ebp
        je public_535959
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [ecx+0xB0], eax
        jne public_535959
        mov dx, word ptr ss : [esp+0x14]
        cmp dx, word ptr ds : [ebx+0x14]
        je public_535970
        public_535959 : nop
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        mov dx, word ptr ds : [ebx+0x14]
        push ebp
        lea ecx, ds:[esi+4]
        push edx
        push edi
        lea edx, ss:[esp+0x40]
        push edx
        call dword ptr ds : [eax+0x44]
        public_535970 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x5357f0)
    }
}

#undef public_5358b5
#undef public_5358d7
#undef public_5358ef
#undef public_5358f1
#undef public_535959
#undef public_535970
