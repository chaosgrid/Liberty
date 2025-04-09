#include "FreeLancer-PCH.h"


#define public_4f6c33 _public_4f6c33
#define public_4f6c35 _public_4f6c35
#define public_4f6c59 _public_4f6c59
#define public_4f6c5d _public_4f6c5d
#define public_4f6c62 _public_4f6c62
#define public_4f6c72 _public_4f6c72
#define public_4f6c88 _public_4f6c88
#define public_4f6cb4 _public_4f6cb4

PROC_DECLARE(0x4f6c20, internal_4f6c20, public_4f6c20);
extern "C" NAKED register_t __cdecl internal_4f6c20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d9968]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_4f6c72
        mov ebp, dword ptr ss : [esp+0x18]
        public_4f6c33 : nop
        mov esi, ebp
        public_4f6c35 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_4f6c5d
        test cl, cl
        je public_4f6c59
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_4f6c5d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_4f6c35
        public_4f6c59 : nop
        xor eax, eax
        jmp public_4f6c62
        public_4f6c5d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_4f6c62 : nop
        test eax, eax
        je public_4f6c88
        mov eax, dword ptr ds : [edi*8+public_5d9970]
        inc edi
        test eax, eax
        jne public_4f6c33
        public_4f6c72 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_4f6c88 : nop
        mov eax, dword ptr ds : [edi*8+public_5d996c]
        test eax, eax
        jns public_4f6cb4
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
        public_4f6cb4 : nop
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
        UNREACHABLE_TRAP(0x4f6c20)
    }
}

#undef public_4f6c33
#undef public_4f6c35
#undef public_4f6c59
#undef public_4f6c5d
#undef public_4f6c62
#undef public_4f6c72
#undef public_4f6c88
#undef public_4f6cb4
