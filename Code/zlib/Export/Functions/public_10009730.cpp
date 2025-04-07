#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100096d0);
CLANG_FORWARD_PROC_SYMBOL(public_10009730);

#define public_1000974f _public_1000974f
#define public_10009756 _public_10009756
#define public_10009768 _public_10009768
#define public_1000977f _public_1000977f
#define public_10009788 _public_10009788
#define public_100097a0 _public_100097a0
#define public_100097b1 _public_100097b1
#define public_100097cb _public_100097cb
#define public_100097d2 _public_100097d2

PROC_DECLARE(0x10009730, internal_10009730, public_10009730);
extern "C" NAKED register_t __cdecl internal_10009730()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        test ebp, ebp
        je public_1000974f
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_10009756
        call public_100096d0
        test eax, eax
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp], eax
        jne public_10009756
        public_1000974f : nop
        mov eax, 0xFFFFFF98
        pop ebp
        ret 
        public_10009756 : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [ebp+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        test edi, edi
        jbe public_100097cb
        public_10009768 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_1000977f
        call public_100096d0
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_100097d2
        mov esi, eax
        mov dword ptr ss : [ebp+4], esi
        public_1000977f : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jb public_10009788
        mov eax, edi
        public_10009788 : nop
        test eax, eax
        mov ecx, dword ptr ds : [esi+8]
        lea ecx, ds:[ecx+esi+0x10]
        jbe public_100097b1
        mov edi, ebx
        sub edi, ecx
        mov ebp, eax
        lea esp, ss:[esp]
        public_100097a0 : nop
        mov dl, byte ptr ds : [edi+ecx]
        mov byte ptr ds : [ecx], dl
        inc ecx
        dec ebp
        jne public_100097a0
        mov ebp, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x1C]
        public_100097b1 : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        add edx, eax
        sub ecx, eax
        add ebx, eax
        sub edi, eax
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ss : [esp+0x1C], edi
        jne public_10009768
        public_100097cb : nop
        pop edi
        pop esi
        pop ebx
        xor eax, eax
        pop ebp
        ret 
        public_100097d2 : nop
        pop edi
        pop esi
        pop ebx
        mov eax, 0xFFFFFF98
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x10009730)
    }
}

#undef public_1000974f
#undef public_10009756
#undef public_10009768
#undef public_1000977f
#undef public_10009788
#undef public_100097a0
#undef public_100097b1
#undef public_100097cb
#undef public_100097d2
