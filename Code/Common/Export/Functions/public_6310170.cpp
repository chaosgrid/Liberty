#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630f4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);

#define public_63101bc _public_63101bc
#define public_63101cb _public_63101cb
#define public_63101cf _public_63101cf
#define public_63101e4 _public_63101e4
#define public_63101e9 _public_63101e9
#define public_6310218 _public_6310218
#define public_6310235 _public_6310235
#define public_6310249 _public_6310249

PROC_DECLARE(0x6310170, internal_6310170, public_6310170);
extern "C" NAKED register_t __cdecl internal_6310170()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x1564]
        test al, al
        je public_6310249
        mov eax, dword ptr ds : [ecx+0x1454]
        movzx edx, word ptr ds : [eax+2]
        movsx eax, word ptr ds : [ecx+0x1458]
        cmp eax, edx
        push esi
        push edi
        jge public_63101e4
        mov edi, dword ptr ds : [ecx+0x1440]
        test edi, edi
        mov esi, 3
        je public_63101cb
        mov eax, dword ptr ds : [ecx+0x1448]
        mov edx, dword ptr ds : [ecx+0x1444]
        cmp eax, edx
        jae public_63101cb
        sub edx, eax
        cmp edx, esi
        jae public_63101bc
        mov esi, edx
        public_63101bc : nop
        lea edx, ds:[eax+edi]
        add eax, esi
        mov dword ptr ds : [ecx+0x1448], eax
        mov eax, edx
        jmp public_63101cf
        public_63101cb : nop
        xor esi, esi
        xor eax, eax
        public_63101cf : nop
        cmp esi, 3
        mov dword ptr ds : [ecx+0x145C], eax
        je public_63101e9
        mov dword ptr ds : [ecx+0x145C], 0
        public_63101e4 : nop
        pop edi
        xor al, al
        pop esi
        ret 
        public_63101e9 : nop
        mov edx, dword ptr ds : [ecx+0x145C]
        movzx eax, byte ptr ds : [edx+2]
        mov edi, dword ptr ds : [ecx+0x1440]
        test edi, edi
        lea esi, ds:[eax+eax*4]
        je public_6310235
        mov eax, dword ptr ds : [ecx+0x1448]
        mov edx, dword ptr ds : [ecx+0x1444]
        cmp eax, edx
        jae public_6310235
        sub edx, eax
        cmp esi, edx
        jbe public_6310218
        mov esi, edx
        public_6310218 : nop
        lea edx, ds:[eax+edi]
        add eax, esi
        inc word ptr ds : [ecx+0x1458]
        pop edi
        mov dword ptr ds : [ecx+0x1448], eax
        mov dword ptr ds : [ecx+0x1460], edx
        mov al, 1
        pop esi
        ret 
        public_6310235 : nop
        xor edx, edx
        inc word ptr ds : [ecx+0x1458]
        pop edi
        mov dword ptr ds : [ecx+0x1460], edx
        mov al, 1
        pop esi
        ret 
        public_6310249 : nop
        jmp public_630f4e0
        UNREACHABLE_TRAP(0x6310170)
    }
}

#undef public_63101bc
#undef public_63101cb
#undef public_63101cf
#undef public_63101e4
#undef public_63101e9
#undef public_6310218
#undef public_6310235
#undef public_6310249
