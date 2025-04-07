#include "EngBase-PCH.h"


#define public_6621cb3 _public_6621cb3
#define public_6621cb5 _public_6621cb5
#define public_6621cd9 _public_6621cd9
#define public_6621cdd _public_6621cdd
#define public_6621ce2 _public_6621ce2
#define public_6621cf2 _public_6621cf2
#define public_6621d09 _public_6621d09
#define public_6621d2f _public_6621d2f
#define public_6621d5b _public_6621d5b
#define public_6621d6e _public_6621d6e
#define public_6621d77 _public_6621d77

PROC_DECLARE(0x6621ca0, internal_6621ca0, public_6621ca0);
extern "C" NAKED register_t __cdecl internal_6621ca0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6629608]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6621cf2
        public_6621cb3 : nop
        mov esi, ebp
        public_6621cb5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6621cdd
        test cl, cl
        je public_6621cd9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6621cdd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6621cb5
        public_6621cd9 : nop
        xor eax, eax
        jmp public_6621ce2
        public_6621cdd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6621ce2 : nop
        test eax, eax
        je public_6621d2f
        mov eax, dword ptr ds : [edi*8+public_6629610]
        inc edi
        test eax, eax
        jne public_6621cb3
        public_6621cf2 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], 0
        mov ebx, dword ptr ds : [edx+0x4C]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6621d77
        public_6621d09 : nop
        mov eax, dword ptr ds : [esi+0x38]
        push edi
        push ebp
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_6621d6e
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6621d09
        mov dword ptr ds : [edi], 0
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6621d2f : nop
        mov eax, dword ptr ds : [edi*8+public_662960c]
        test eax, eax
        jns public_6621d5b
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+ecx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        pop edi
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6621d5b : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], esi
        public_6621d6e : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6621d77 : nop
        mov dword ptr ds : [edi], 0
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6621ca0)
    }
}

#undef public_6621cb3
#undef public_6621cb5
#undef public_6621cd9
#undef public_6621cdd
#undef public_6621ce2
#undef public_6621cf2
#undef public_6621d09
#undef public_6621d2f
#undef public_6621d5b
#undef public_6621d6e
#undef public_6621d77
