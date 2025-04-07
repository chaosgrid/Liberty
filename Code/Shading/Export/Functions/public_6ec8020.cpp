#include "Shading-PCH.h"


#define public_6ec8033 _public_6ec8033
#define public_6ec8035 _public_6ec8035
#define public_6ec8059 _public_6ec8059
#define public_6ec805d _public_6ec805d
#define public_6ec8062 _public_6ec8062
#define public_6ec8072 _public_6ec8072
#define public_6ec8088 _public_6ec8088
#define public_6ec80b7 _public_6ec80b7

PROC_DECLARE(0x6ec8020, internal_6ec8020, public_6ec8020);
extern "C" NAKED register_t __cdecl internal_6ec8020()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed2c00]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6ec8072
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ec8033 : nop
        mov esi, ebp
        public_6ec8035 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ec805d
        test cl, cl
        je public_6ec8059
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ec805d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ec8035
        public_6ec8059 : nop
        xor eax, eax
        jmp public_6ec8062
        public_6ec805d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec8062 : nop
        test eax, eax
        je public_6ec8088
        mov eax, dword ptr ds : [edi*8+public_6ed2c08]
        inc edi
        test eax, eax
        jne public_6ec8033
        public_6ec8072 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6ec8088 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed2c04]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6ec80b7
        mov edx, dword ptr ds : [ecx+8]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6ec80b7 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+eax]
        add esi, eax
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec8020)
    }
}

#undef public_6ec8033
#undef public_6ec8035
#undef public_6ec8059
#undef public_6ec805d
#undef public_6ec8062
#undef public_6ec8072
#undef public_6ec8088
#undef public_6ec80b7
