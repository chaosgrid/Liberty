#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_535350 _public_535350
#define public_535355 _public_535355
#define public_53536b _public_53536b
#define public_535391 _public_535391
#define public_535393 _public_535393
#define public_5353ef _public_5353ef
#define public_5353f1 _public_5353f1
#define public_535409 _public_535409
#define public_535456 _public_535456

PROC_DECLARE(0x535330, internal_535330, public_535330);
extern "C" NAKED register_t __cdecl internal_535330()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        cmp esi, 0xFFFFFFFF
        push edi
        mov edi, ecx
        je public_535350
        call public_54bb00
        cmp esi, eax
        mov byte ptr ss : [esp+0x24], 0
        jne public_535355
        public_535350 : nop
        mov byte ptr ss : [esp+0x24], 1
        public_535355 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_53536b
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        je public_535456
        public_53536b : nop
        lea ebp, ds:[edi-4]
        test ebp, ebp
        je public_535391
        lea eax, ss:[ebp+0xC]
        test eax, eax
        je public_535391
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_535391
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_535393
        public_535391 : nop
        xor eax, eax
        public_535393 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c6574]
        mov esi, eax
        test esi, esi
        je public_535456
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        test al, al
        jne public_535456
        mov ebx, dword ptr ss : [esp+0x20]
        test bl, bl
        jne public_535409
        cmp dword ptr ds : [esi+0x14], 0x20000
        jne public_535409
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_5353ef
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_5353ef
        mov edi, eax
        jmp public_5353f1
        public_5353ef : nop
        xor edi, edi
        public_5353f1 : nop
        mov ecx, edi
        call dword ptr ds : [public_5c6d0c]
        test eax, eax
        jne public_535456
        mov ecx, edi
        call dword ptr ds : [public_5c6534]
        test al, al
        jne public_535456
        public_535409 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        cmp al, bl
        je public_535456
        mov eax, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        je public_535456
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov cx, word ptr ds : [eax]
        lea eax, ss:[esp+0x10]
        mov word ptr ss : [esp+0x14], cx
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        mov eax, dword ptr ds : [public_673344]
        mov byte ptr ss : [esp+0x1A], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+4]
        public_535456 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x535330)
    }
}

#undef public_535350
#undef public_535355
#undef public_53536b
#undef public_535391
#undef public_535393
#undef public_5353ef
#undef public_5353f1
#undef public_535409
#undef public_535456
