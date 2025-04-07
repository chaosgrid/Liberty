#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d226d0);

#define public_6d226f0 _public_6d226f0
#define public_6d22703 _public_6d22703
#define public_6d22713 _public_6d22713
#define public_6d22725 _public_6d22725
#define public_6d22731 _public_6d22731
#define public_6d22735 _public_6d22735
#define public_6d2274f _public_6d2274f
#define public_6d22757 _public_6d22757

PROC_DECLARE(0x6d226d0, internal_6d226d0, public_6d226d0);
extern "C" NAKED register_t __cdecl internal_6d226d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        test ah, 2
        push ebx
        push esi
        push edi
        je public_6d22757
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ss : [esp+0x14]
        cmp eax, edi
        je public_6d2274f
        mov ebx, dword ptr ds : [public_6d64c18]
        mov edi, edi
        public_6d226f0 : nop
        movzx eax, word ptr ds : [eax]
        cmp ax, 0x23
        je public_6d22703
        push eax
        call ebx
        add esp, 4
        test eax, eax
        je public_6d2274f
        public_6d22703 : nop
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        cmp cx, 0x23
        mov dword ptr ds : [esi], eax
        jne public_6d22731
        public_6d22713 : nop
        cmp eax, edi
        je public_6d2274f
        mov dx, word ptr ds : [eax]
        add eax, 2
        cmp dx, 0xA
        mov dword ptr ds : [esi], eax
        jne public_6d22713
        public_6d22725 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        jne public_6d226f0
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6d22731 : nop
        cmp eax, edi
        je public_6d2274f
        public_6d22735 : nop
        movzx eax, word ptr ds : [eax]
        push eax
        call ebx
        add esp, 4
        test eax, eax
        je public_6d22725
        mov edx, dword ptr ds : [esi]
        add edx, 2
        mov eax, edx
        cmp eax, edi
        mov dword ptr ds : [esi], edx
        jne public_6d22735
        public_6d2274f : nop
        mov eax, dword ptr ds : [esi]
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6d22757 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d226d0)
    }
}

#undef public_6d226f0
#undef public_6d22703
#undef public_6d22713
#undef public_6d22725
#undef public_6d22731
#undef public_6d22735
#undef public_6d2274f
#undef public_6d22757
