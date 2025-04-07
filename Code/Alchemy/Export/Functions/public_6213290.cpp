#include "Alchemy-PCH.h"


#define public_62132a3 _public_62132a3
#define public_62132a5 _public_62132a5
#define public_62132c9 _public_62132c9
#define public_62132cd _public_62132cd
#define public_62132d2 _public_62132d2
#define public_62132e2 _public_62132e2
#define public_62132f8 _public_62132f8
#define public_6213324 _public_6213324

PROC_DECLARE(0x6213290, internal_6213290, public_6213290);
extern "C" NAKED register_t __cdecl internal_6213290()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624c7a8]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_62132e2
        mov ebp, dword ptr ss : [esp+0x18]
        public_62132a3 : nop
        mov esi, ebp
        public_62132a5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_62132cd
        test cl, cl
        je public_62132c9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_62132cd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_62132a5
        public_62132c9 : nop
        xor eax, eax
        jmp public_62132d2
        public_62132cd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62132d2 : nop
        test eax, eax
        je public_62132f8
        mov eax, dword ptr ds : [edi*8+public_624c7b0]
        inc edi
        test eax, eax
        jne public_62132a3
        public_62132e2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_62132f8 : nop
        mov eax, dword ptr ds : [edi*8+public_624c7ac]
        test eax, eax
        jns public_6213324
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
        public_6213324 : nop
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
        UNREACHABLE_TRAP(0x6213290)
    }
}

#undef public_62132a3
#undef public_62132a5
#undef public_62132c9
#undef public_62132cd
#undef public_62132d2
#undef public_62132e2
#undef public_62132f8
#undef public_6213324
