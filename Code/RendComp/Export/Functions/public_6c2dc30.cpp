#include "RendComp-PCH.h"


#define public_6c2dc43 _public_6c2dc43
#define public_6c2dc45 _public_6c2dc45
#define public_6c2dc69 _public_6c2dc69
#define public_6c2dc6d _public_6c2dc6d
#define public_6c2dc72 _public_6c2dc72
#define public_6c2dc82 _public_6c2dc82
#define public_6c2dc98 _public_6c2dc98
#define public_6c2dcc4 _public_6c2dcc4

PROC_DECLARE(0x6c2dc30, internal_6c2dc30, public_6c2dc30);
extern "C" NAKED register_t __cdecl internal_6c2dc30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c36424]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6c2dc82
        mov ebp, dword ptr ss : [esp+0x18]
        public_6c2dc43 : nop
        mov esi, ebp
        public_6c2dc45 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6c2dc6d
        test cl, cl
        je public_6c2dc69
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6c2dc6d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6c2dc45
        public_6c2dc69 : nop
        xor eax, eax
        jmp public_6c2dc72
        public_6c2dc6d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6c2dc72 : nop
        test eax, eax
        je public_6c2dc98
        mov eax, dword ptr ds : [edi*8+public_6c3642c]
        inc edi
        test eax, eax
        jne public_6c2dc43
        public_6c2dc82 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6c2dc98 : nop
        mov eax, dword ptr ds : [edi*8+public_6c36428]
        test eax, eax
        jns public_6c2dcc4
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
        public_6c2dcc4 : nop
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
        UNREACHABLE_TRAP(0x6c2dc30)
    }
}

#undef public_6c2dc43
#undef public_6c2dc45
#undef public_6c2dc69
#undef public_6c2dc6d
#undef public_6c2dc72
#undef public_6c2dc82
#undef public_6c2dc98
#undef public_6c2dcc4
