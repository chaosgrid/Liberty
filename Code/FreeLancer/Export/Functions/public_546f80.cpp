#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_515e20);

#define public_546faf _public_546faf
#define public_546fb1 _public_546fb1
#define public_546fdc _public_546fdc
#define public_546fde _public_546fde
#define public_547038 _public_547038
#define public_54703a _public_54703a
#define public_547084 _public_547084
#define public_547086 _public_547086
#define public_5470a9 _public_5470a9
#define public_5470ab _public_5470ab

PROC_DECLARE(0x546f80, internal_546f80, public_546f80);
extern "C" NAKED register_t __cdecl internal_546f80()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        lea esi, ds:[ecx-4]
        xor ebx, ebx
        cmp esi, ebx
        push edi
        je public_546faf
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_546faf
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_546faf
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_546fb1
        public_546faf : nop
        xor eax, eax
        public_546fb1 : nop
        mov ecx, eax
        call dword ptr ds : [public_5c6b28]
        cmp esi, ebx
        je public_546fdc
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_546fdc
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_546fdc
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_546fde
        public_546fdc : nop
        xor ecx, ecx
        public_546fde : nop
        call dword ptr ds : [public_5c62e8]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ss : [esp+0x1A], bl
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ss : [esp+0x18], bl
        mov byte ptr ss : [esp+0x19], bl
        call dword ptr ds : [eax+0x20]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], eax
        je public_547038
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_547038
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_547038
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_54703a
        public_547038 : nop
        xor ecx, ecx
        public_54703a : nop
        mov ebp, dword ptr ds : [public_5c6b24]
        call ebp
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], 4
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp esi, ebx
        je public_547084
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_547084
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_547084
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_547086
        public_547084 : nop
        xor eax, eax
        public_547086 : nop
        cmp esi, ebx
        je public_5470a9
        lea edx, ds:[esi+0xC]
        cmp edx, ebx
        je public_5470a9
        mov edi, dword ptr ds : [edx+4]
        cmp edi, ebx
        je public_5470a9
        mov edx, dword ptr ds : [edi+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_5470ab
        public_5470a9 : nop
        xor edi, edi
        public_5470ab : nop
        mov ecx, dword ptr ds : [public_67ecd0]
        mov ebx, dword ptr ds : [ecx]
        mov ecx, eax
        call dword ptr ds : [public_5c6b20]
        push eax
        mov ecx, edi
        call ebp
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        mov eax, dword ptr ds : [public_673344]
        push eax
        call dword ptr ds : [ebx+0x1C]
        push esi
        call public_515e20
        add esp, 4
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x546f80)
    }
}

#undef public_546faf
#undef public_546fb1
#undef public_546fdc
#undef public_546fde
#undef public_547038
#undef public_54703a
#undef public_547084
#undef public_547086
#undef public_5470a9
#undef public_5470ab
