#include "THORN-PCH.h"


#define public_6f33223 _public_6f33223
#define public_6f33225 _public_6f33225
#define public_6f33249 _public_6f33249
#define public_6f3324d _public_6f3324d
#define public_6f33252 _public_6f33252
#define public_6f33262 _public_6f33262
#define public_6f33278 _public_6f33278
#define public_6f332a4 _public_6f332a4

PROC_DECLARE(0x6f33210, internal_6f33210, public_6f33210);
extern "C" NAKED register_t __cdecl internal_6f33210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5a97c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6f33262
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f33223 : nop
        mov esi, ebp
        public_6f33225 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f3324d
        test cl, cl
        je public_6f33249
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f3324d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f33225
        public_6f33249 : nop
        xor eax, eax
        jmp public_6f33252
        public_6f3324d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f33252 : nop
        test eax, eax
        je public_6f33278
        mov eax, dword ptr ds : [edi*8+public_6f5a984]
        inc edi
        test eax, eax
        jne public_6f33223
        public_6f33262 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f33278 : nop
        mov eax, dword ptr ds : [edi*8+public_6f5a980]
        test eax, eax
        jns public_6f332a4
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
        public_6f332a4 : nop
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
        UNREACHABLE_TRAP(0x6f33210)
    }
}

#undef public_6f33223
#undef public_6f33225
#undef public_6f33249
#undef public_6f3324d
#undef public_6f33252
#undef public_6f33262
#undef public_6f33278
#undef public_6f332a4
