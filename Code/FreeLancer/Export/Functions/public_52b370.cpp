#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_503f40);

#define public_52b3ce _public_52b3ce
#define public_52b3e7 _public_52b3e7
#define public_52b3f3 _public_52b3f3
#define public_52b3f5 _public_52b3f5
#define public_52b417 _public_52b417
#define public_52b423 _public_52b423

PROC_DECLARE(0x52b370, internal_52b370, public_52b370);
extern "C" NAKED register_t __cdecl internal_52b370()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x18]
        test al, al
        jne public_52b3ce
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        lea edi, ds:[esi+0x28]
        mov ecx, edi
        mov ebx, eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_52b3ce
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        push ebx
        push edi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c5c
        call public_503f40
        public_52b3ce : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov byte ptr ds : [esi+0x10], 1
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x1C]
        add esi, 0x14
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], edx
        je public_52b3f3
        public_52b3e7 : nop
        cmp word ptr ds : [eax], dx
        je public_52b3f5
        add eax, 2
        cmp eax, ecx
        jne public_52b3e7
        public_52b3f3 : nop
        mov eax, ecx
        public_52b3f5 : nop
        cmp eax, ecx
        jne public_52b423
        lea edx, ss:[esp+0x20]
        push edx
        push 1
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c6898]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_52b423
        mov ecx, dword ptr ss : [esp+0x20]
        public_52b417 : nop
        cmp word ptr ds : [eax], cx
        je public_52b423
        add eax, 2
        cmp eax, esi
        jne public_52b417
        public_52b423 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x52b370)
    }
}

#undef public_52b3ce
#undef public_52b3e7
#undef public_52b3f3
#undef public_52b3f5
#undef public_52b417
#undef public_52b423
