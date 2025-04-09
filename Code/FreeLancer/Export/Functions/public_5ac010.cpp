#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5595c0);
CLANG_FORWARD_PROC_SYMBOL(public_5686b0);
CLANG_FORWARD_PROC_SYMBOL(public_5ac010);

#define public_5ac030 _public_5ac030
#define public_5ac061 _public_5ac061
#define public_5ac07f _public_5ac07f
#define public_5ac095 _public_5ac095
#define public_5ac0b0 _public_5ac0b0
#define public_5ac206 _public_5ac206
#define public_5ac217 _public_5ac217
#define public_5ac228 _public_5ac228
#define public_5ac238 _public_5ac238

PROC_DECLARE(0x5ac010, internal_5ac010, public_5ac010);
extern "C" NAKED register_t __cdecl internal_5ac010()
{
    __asm
    {
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x168]
        push esi
        mov esi, dword ptr ss : [ebp+0x164]
        cmp esi, eax
        push edi
        je public_5ac238
        mov edi, dword ptr ss : [esp+0x10]
        lea ecx, ds:[ecx]
        public_5ac030 : nop
        mov al, byte ptr ds : [esi+0x3D]
        test al, al
        je public_5ac07f
        mov eax, dword ptr ds : [esi+0x6C]
        test eax, eax
        je public_5ac061
        lea eax, ds:[edi+0x64]
        push eax
        lea ecx, ds:[esi+0x64]
        push ecx
        call dword ptr ds : [public_5c704c]
        add esp, 8
        test al, al
        je public_5ac061
        mov edx, dword ptr ds : [esi+0x90]
        cmp edx, dword ptr ds : [edi+0x90]
        je public_5ac095
        public_5ac061 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_5ac07f
        push edi
        push esi
        call dword ptr ds : [public_5c7050]
        add esp, 8
        test al, al
        je public_5ac07f
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, dword ptr ds : [edi+0x14]
        je public_5ac095
        public_5ac07f : nop
        mov eax, dword ptr ss : [ebp+0x168]
        add esi, 0x9C
        cmp esi, eax
        jne public_5ac030
        pop edi
        pop esi
        pop ebp
        ret 4
        public_5ac095 : nop
        push ebx
        mov ebx, dword ptr ss : [ebp+0x168]
        lea edi, ds:[esi+0x9C]
        cmp edi, ebx
        je public_5ac206
        lea esi, ds:[edi-0x88]
        public_5ac0b0 : nop
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        push edi
        lea ecx, ds:[esi-0x14]
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ds : [esi+0x98]
        mov dword ptr ds : [esi-4], eax
        mov ecx, dword ptr ds : [esi+0x9C]
        lea edx, ds:[esi+0xA0]
        mov dword ptr ds : [esi], ecx
        push edx
        lea ecx, ds:[esi+4]
        call public_5595c0
        mov eax, dword ptr ds : [esi+0xB0]
        mov dword ptr ds : [esi+0x14], eax
        mov ecx, dword ptr ds : [esi+0xB4]
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [esi+0xB8]
        mov dword ptr ds : [esi+0x1C], edx
        mov eax, dword ptr ds : [esi+0xBC]
        mov dword ptr ds : [esi+0x20], eax
        mov ecx, dword ptr ds : [esi+0xC0]
        mov dword ptr ds : [esi+0x24], ecx
        mov dl, byte ptr ds : [esi+0xC4]
        mov byte ptr ds : [esi+0x28], dl
        mov al, byte ptr ds : [esi+0xC5]
        mov byte ptr ds : [esi+0x29], al
        mov cl, byte ptr ds : [esi+0xC6]
        mov byte ptr ds : [esi+0x2A], cl
        mov edx, dword ptr ds : [esi+0xC8]
        mov dword ptr ds : [esi+0x2C], edx
        mov eax, dword ptr ds : [public_5c705c]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        lea edx, ds:[esi+0xCC]
        push edx
        lea ecx, ds:[esi+0x30]
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ds : [public_5c705c]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        lea edx, ds:[esi+0xDC]
        push edx
        lea ecx, ds:[esi+0x40]
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        lea edx, ds:[esi+0xEC]
        push edx
        lea ecx, ds:[esi+0x50]
        call dword ptr ds : [public_5c6f9c]
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        lea edx, ds:[esi+0xFC]
        push edx
        lea ecx, ds:[esi+0x60]
        call dword ptr ds : [public_5c6f9c]
        mov eax, dword ptr ds : [esi+0x10C]
        mov dword ptr ds : [esi+0x70], eax
        mov ecx, dword ptr ds : [esi+0x110]
        mov dword ptr ds : [esi+0x74], ecx
        mov edx, dword ptr ds : [esi+0x114]
        mov dword ptr ds : [esi+0x78], edx
        mov eax, dword ptr ds : [esi+0x118]
        mov dword ptr ds : [esi+0x7C], eax
        mov cl, byte ptr ds : [esi+0x11C]
        mov byte ptr ds : [esi+0x80], cl
        mov dl, byte ptr ds : [esi+0x11D]
        mov byte ptr ds : [esi+0x81], dl
        mov al, byte ptr ds : [esi+0x11E]
        mov byte ptr ds : [esi+0x82], al
        mov ecx, dword ptr ds : [esi+0x120]
        mov dword ptr ds : [esi+0x84], ecx
        add edi, 0x9C
        add esi, 0x9C
        cmp edi, ebx
        jne public_5ac0b0
        public_5ac206 : nop
        mov edi, dword ptr ss : [ebp+0x168]
        lea esi, ds:[edi-0x9C]
        cmp esi, edi
        pop ebx
        je public_5ac228
        public_5ac217 : nop
        mov ecx, esi
        call public_5686b0
        add esi, 0x9C
        cmp esi, edi
        jne public_5ac217
        public_5ac228 : nop
        add dword ptr ss : [ebp+0x168], 0xFFFFFF64
        dec dword ptr ss : [ebp+0x25C]
        public_5ac238 : nop
        pop edi
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x5ac010)
    }
}

#undef public_5ac030
#undef public_5ac061
#undef public_5ac07f
#undef public_5ac095
#undef public_5ac0b0
#undef public_5ac206
#undef public_5ac217
#undef public_5ac228
#undef public_5ac238
