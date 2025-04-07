#include "ReadFile-PCH.h"


#define public_6b780ac _public_6b780ac
#define public_6b780d0 _public_6b780d0
#define public_6b780d4 _public_6b780d4
#define public_6b780d9 _public_6b780d9
#define public_6b78111 _public_6b78111
#define public_6b78122 _public_6b78122

PROC_DECLARE(0x6b78090, internal_6b78090, public_6b78090);
extern "C" NAKED register_t __cdecl internal_6b78090()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push edi
        xor edi, edi
        cmp dword ptr ds : [eax], 8
        jne public_6b78122
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+8]
        public_6b780ac : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6b780d4
        test cl, cl
        je public_6b780d0
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6b780d4
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6b780ac
        public_6b780d0 : nop
        xor eax, eax
        jmp public_6b780d9
        public_6b780d4 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6b780d9 : nop
        pop esi
        pop ebx
        test eax, eax
        jne public_6b78122
        push 1
        push 0x118
        call dword ptr ds : [public_6b7906c]
        add esp, 8
        test eax, eax
        je public_6b78111
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], offset public_6b793c0
        mov dword ptr ds : [eax+0x114], 1
        xor ecx, ecx
        mov dword ptr ds : [edx], eax
        mov eax, ecx
        pop edi
        ret 0xC
        public_6b78111 : nop
        mov edx, dword ptr ss : [esp+0x10]
        xor ecx, ecx
        mov eax, 0xFFFFFFFC
        pop edi
        mov dword ptr ds : [edx], ecx
        ret 0xC
        public_6b78122 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6b78090)
    }
}

#undef public_6b780ac
#undef public_6b780d0
#undef public_6b780d4
#undef public_6b780d9
#undef public_6b78111
#undef public_6b78122
