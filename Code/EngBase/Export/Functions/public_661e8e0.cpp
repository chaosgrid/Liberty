#include "EngBase-PCH.h"


#define public_661e8f3 _public_661e8f3
#define public_661e8f5 _public_661e8f5
#define public_661e919 _public_661e919
#define public_661e91d _public_661e91d
#define public_661e922 _public_661e922
#define public_661e932 _public_661e932
#define public_661e948 _public_661e948
#define public_661e974 _public_661e974

PROC_DECLARE(0x661e8e0, internal_661e8e0, public_661e8e0);
extern "C" NAKED register_t __cdecl internal_661e8e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66295a4]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_661e932
        mov ebp, dword ptr ss : [esp+0x18]
        public_661e8f3 : nop
        mov esi, ebp
        public_661e8f5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_661e91d
        test cl, cl
        je public_661e919
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_661e91d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_661e8f5
        public_661e919 : nop
        xor eax, eax
        jmp public_661e922
        public_661e91d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_661e922 : nop
        test eax, eax
        je public_661e948
        mov eax, dword ptr ds : [edi*8+public_66295ac]
        inc edi
        test eax, eax
        jne public_661e8f3
        public_661e932 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_661e948 : nop
        mov eax, dword ptr ds : [edi*8+public_66295a8]
        test eax, eax
        jns public_661e974
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
        public_661e974 : nop
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
        UNREACHABLE_TRAP(0x661e8e0)
    }
}

#undef public_661e8f3
#undef public_661e8f5
#undef public_661e919
#undef public_661e91d
#undef public_661e922
#undef public_661e932
#undef public_661e948
#undef public_661e974
