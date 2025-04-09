#include "FreeLancer-PCH.h"


#define public_4f6d23 _public_4f6d23
#define public_4f6d25 _public_4f6d25
#define public_4f6d49 _public_4f6d49
#define public_4f6d4d _public_4f6d4d
#define public_4f6d52 _public_4f6d52
#define public_4f6d62 _public_4f6d62
#define public_4f6d78 _public_4f6d78
#define public_4f6da4 _public_4f6da4

PROC_DECLARE(0x4f6d10, internal_4f6d10, public_4f6d10);
extern "C" NAKED register_t __cdecl internal_4f6d10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d998c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_4f6d62
        mov ebp, dword ptr ss : [esp+0x18]
        public_4f6d23 : nop
        mov esi, ebp
        public_4f6d25 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_4f6d4d
        test cl, cl
        je public_4f6d49
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_4f6d4d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_4f6d25
        public_4f6d49 : nop
        xor eax, eax
        jmp public_4f6d52
        public_4f6d4d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_4f6d52 : nop
        test eax, eax
        je public_4f6d78
        mov eax, dword ptr ds : [edi*8+public_5d9994]
        inc edi
        test eax, eax
        jne public_4f6d23
        public_4f6d62 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_4f6d78 : nop
        mov eax, dword ptr ds : [edi*8+public_5d9990]
        test eax, eax
        jns public_4f6da4
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
        public_4f6da4 : nop
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
        UNREACHABLE_TRAP(0x4f6d10)
    }
}

#undef public_4f6d23
#undef public_4f6d25
#undef public_4f6d49
#undef public_4f6d4d
#undef public_4f6d52
#undef public_4f6d62
#undef public_4f6d78
#undef public_4f6da4
