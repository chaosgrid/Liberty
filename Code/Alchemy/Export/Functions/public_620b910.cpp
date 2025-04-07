#include "Alchemy-PCH.h"


#define public_620b923 _public_620b923
#define public_620b925 _public_620b925
#define public_620b949 _public_620b949
#define public_620b94d _public_620b94d
#define public_620b952 _public_620b952
#define public_620b962 _public_620b962
#define public_620b978 _public_620b978
#define public_620b9a4 _public_620b9a4

PROC_DECLARE(0x620b910, internal_620b910, public_620b910);
extern "C" NAKED register_t __cdecl internal_620b910()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624bd88]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_620b962
        mov ebp, dword ptr ss : [esp+0x18]
        public_620b923 : nop
        mov esi, ebp
        public_620b925 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_620b94d
        test cl, cl
        je public_620b949
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_620b94d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_620b925
        public_620b949 : nop
        xor eax, eax
        jmp public_620b952
        public_620b94d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_620b952 : nop
        test eax, eax
        je public_620b978
        mov eax, dword ptr ds : [edi*8+public_624bd90]
        inc edi
        test eax, eax
        jne public_620b923
        public_620b962 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_620b978 : nop
        mov eax, dword ptr ds : [edi*8+public_624bd8c]
        test eax, eax
        jns public_620b9a4
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
        public_620b9a4 : nop
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
        UNREACHABLE_TRAP(0x620b910)
    }
}

#undef public_620b923
#undef public_620b925
#undef public_620b949
#undef public_620b94d
#undef public_620b952
#undef public_620b962
#undef public_620b978
#undef public_620b9a4
