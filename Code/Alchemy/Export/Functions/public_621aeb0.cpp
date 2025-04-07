#include "Alchemy-PCH.h"


#define public_621aec3 _public_621aec3
#define public_621aec5 _public_621aec5
#define public_621aee9 _public_621aee9
#define public_621aeed _public_621aeed
#define public_621aef2 _public_621aef2
#define public_621af02 _public_621af02
#define public_621af18 _public_621af18
#define public_621af44 _public_621af44

PROC_DECLARE(0x621aeb0, internal_621aeb0, public_621aeb0);
extern "C" NAKED register_t __cdecl internal_621aeb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624d170]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_621af02
        mov ebp, dword ptr ss : [esp+0x18]
        public_621aec3 : nop
        mov esi, ebp
        public_621aec5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_621aeed
        test cl, cl
        je public_621aee9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_621aeed
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_621aec5
        public_621aee9 : nop
        xor eax, eax
        jmp public_621aef2
        public_621aeed : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_621aef2 : nop
        test eax, eax
        je public_621af18
        mov eax, dword ptr ds : [edi*8+public_624d178]
        inc edi
        test eax, eax
        jne public_621aec3
        public_621af02 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_621af18 : nop
        mov eax, dword ptr ds : [edi*8+public_624d174]
        test eax, eax
        jns public_621af44
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
        public_621af44 : nop
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
        UNREACHABLE_TRAP(0x621aeb0)
    }
}

#undef public_621aec3
#undef public_621aec5
#undef public_621aee9
#undef public_621aeed
#undef public_621aef2
#undef public_621af02
#undef public_621af18
#undef public_621af44
