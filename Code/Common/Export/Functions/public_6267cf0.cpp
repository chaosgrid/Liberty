#include "Common-PCH.h"


#define public_6267cfd _public_6267cfd
#define public_6267d04 _public_6267d04
#define public_6267d13 _public_6267d13
#define public_6267d1a _public_6267d1a
#define public_6267d27 _public_6267d27
#define public_6267d41 _public_6267d41
#define public_6267d45 _public_6267d45
#define public_6267d4f _public_6267d4f

PROC_DECLARE(0x6267cf0, internal_6267cf0, public_6267cf0);
extern "C" NAKED register_t __cdecl internal_6267cf0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        push esi
        push edi
        jne public_6267cfd
        xor esi, esi
        jmp public_6267d04
        public_6267cfd : nop
        mov esi, dword ptr ds : [ecx+8]
        sub esi, eax
        sar esi, 1
        public_6267d04 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov edi, dword ptr ds : [edx+4]
        test edi, edi
        jne public_6267d13
        xor edx, edx
        jmp public_6267d1a
        public_6267d13 : nop
        mov edx, dword ptr ds : [edx+8]
        sub edx, edi
        sar edx, 1
        public_6267d1a : nop
        cmp esi, edx
        jne public_6267d4f
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_6267d45
        sub edi, eax
        public_6267d27 : nop
        mov dx, word ptr ds : [eax]
        cmp dx, word ptr ds : [edi+eax]
        jne public_6267d41
        add eax, 2
        cmp eax, ecx
        jne public_6267d27
        pop edi
        mov eax, 1
        pop esi
        ret 4
        public_6267d41 : nop
        cmp eax, ecx
        jne public_6267d4f
        public_6267d45 : nop
        pop edi
        mov eax, 1
        pop esi
        ret 4
        public_6267d4f : nop
        pop edi
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6267cf0)
    }
}

#undef public_6267cfd
#undef public_6267d04
#undef public_6267d13
#undef public_6267d1a
#undef public_6267d27
#undef public_6267d41
#undef public_6267d45
#undef public_6267d4f
