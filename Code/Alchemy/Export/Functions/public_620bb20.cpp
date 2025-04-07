#include "Alchemy-PCH.h"


#define public_620bb33 _public_620bb33
#define public_620bb35 _public_620bb35
#define public_620bb59 _public_620bb59
#define public_620bb5d _public_620bb5d
#define public_620bb62 _public_620bb62
#define public_620bb72 _public_620bb72
#define public_620bb88 _public_620bb88
#define public_620bbb4 _public_620bbb4

PROC_DECLARE(0x620bb20, internal_620bb20, public_620bb20);
extern "C" NAKED register_t __cdecl internal_620bb20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624b62c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_620bb72
        mov ebp, dword ptr ss : [esp+0x18]
        public_620bb33 : nop
        mov esi, ebp
        public_620bb35 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_620bb5d
        test cl, cl
        je public_620bb59
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_620bb5d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_620bb35
        public_620bb59 : nop
        xor eax, eax
        jmp public_620bb62
        public_620bb5d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_620bb62 : nop
        test eax, eax
        je public_620bb88
        mov eax, dword ptr ds : [edi*8+public_624b634]
        inc edi
        test eax, eax
        jne public_620bb33
        public_620bb72 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_620bb88 : nop
        mov eax, dword ptr ds : [edi*8+public_624b630]
        test eax, eax
        jns public_620bbb4
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
        public_620bbb4 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
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
        UNREACHABLE_TRAP(0x620bb20)
    }
}

#undef public_620bb33
#undef public_620bb35
#undef public_620bb59
#undef public_620bb5d
#undef public_620bb62
#undef public_620bb72
#undef public_620bb88
#undef public_620bbb4
