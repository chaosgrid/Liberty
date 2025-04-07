#include "THORN-PCH.h"


#define public_6f33933 _public_6f33933
#define public_6f33935 _public_6f33935
#define public_6f33959 _public_6f33959
#define public_6f3395d _public_6f3395d
#define public_6f33962 _public_6f33962
#define public_6f33972 _public_6f33972
#define public_6f33988 _public_6f33988
#define public_6f339b4 _public_6f339b4

PROC_DECLARE(0x6f33920, internal_6f33920, public_6f33920);
extern "C" NAKED register_t __cdecl internal_6f33920()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5a9ec]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6f33972
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f33933 : nop
        mov esi, ebp
        public_6f33935 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f3395d
        test cl, cl
        je public_6f33959
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f3395d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f33935
        public_6f33959 : nop
        xor eax, eax
        jmp public_6f33962
        public_6f3395d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f33962 : nop
        test eax, eax
        je public_6f33988
        mov eax, dword ptr ds : [edi*8+public_6f5a9f4]
        inc edi
        test eax, eax
        jne public_6f33933
        public_6f33972 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f33988 : nop
        mov eax, dword ptr ds : [edi*8+public_6f5a9f0]
        test eax, eax
        jns public_6f339b4
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+ecx]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6f339b4 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f33920)
    }
}

#undef public_6f33933
#undef public_6f33935
#undef public_6f33959
#undef public_6f3395d
#undef public_6f33962
#undef public_6f33972
#undef public_6f33988
#undef public_6f339b4
