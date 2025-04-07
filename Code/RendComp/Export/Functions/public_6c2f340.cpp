#include "RendComp-PCH.h"


#define public_6c2f353 _public_6c2f353
#define public_6c2f355 _public_6c2f355
#define public_6c2f379 _public_6c2f379
#define public_6c2f37d _public_6c2f37d
#define public_6c2f382 _public_6c2f382
#define public_6c2f392 _public_6c2f392
#define public_6c2f3a8 _public_6c2f3a8
#define public_6c2f3d7 _public_6c2f3d7

PROC_DECLARE(0x6c2f340, internal_6c2f340, public_6c2f340);
extern "C" NAKED register_t __cdecl internal_6c2f340()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c364bc]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6c2f392
        mov ebp, dword ptr ss : [esp+0x18]
        public_6c2f353 : nop
        mov esi, ebp
        public_6c2f355 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6c2f37d
        test cl, cl
        je public_6c2f379
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6c2f37d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6c2f355
        public_6c2f379 : nop
        xor eax, eax
        jmp public_6c2f382
        public_6c2f37d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6c2f382 : nop
        test eax, eax
        je public_6c2f3a8
        mov eax, dword ptr ds : [edi*8+public_6c364c4]
        inc edi
        test eax, eax
        jne public_6c2f353
        public_6c2f392 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6c2f3a8 : nop
        mov eax, dword ptr ds : [edi*8+public_6c364c0]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6c2f3d7
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
        public_6c2f3d7 : nop
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
        UNREACHABLE_TRAP(0x6c2f340)
    }
}

#undef public_6c2f353
#undef public_6c2f355
#undef public_6c2f379
#undef public_6c2f37d
#undef public_6c2f382
#undef public_6c2f392
#undef public_6c2f3a8
#undef public_6c2f3d7
