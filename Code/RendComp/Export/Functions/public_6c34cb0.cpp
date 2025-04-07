#include "RendComp-PCH.h"


#define public_6c34cc3 _public_6c34cc3
#define public_6c34cc5 _public_6c34cc5
#define public_6c34ce9 _public_6c34ce9
#define public_6c34ced _public_6c34ced
#define public_6c34cf2 _public_6c34cf2
#define public_6c34d02 _public_6c34d02
#define public_6c34d18 _public_6c34d18
#define public_6c34d47 _public_6c34d47

PROC_DECLARE(0x6c34cb0, internal_6c34cb0, public_6c34cb0);
extern "C" NAKED register_t __cdecl internal_6c34cb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c367f8]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6c34d02
        mov ebp, dword ptr ss : [esp+0x18]
        public_6c34cc3 : nop
        mov esi, ebp
        public_6c34cc5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6c34ced
        test cl, cl
        je public_6c34ce9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6c34ced
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6c34cc5
        public_6c34ce9 : nop
        xor eax, eax
        jmp public_6c34cf2
        public_6c34ced : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6c34cf2 : nop
        test eax, eax
        je public_6c34d18
        mov eax, dword ptr ds : [edi*8+public_6c36800]
        inc edi
        test eax, eax
        jne public_6c34cc3
        public_6c34d02 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6c34d18 : nop
        mov eax, dword ptr ds : [edi*8+public_6c367fc]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6c34d47
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
        public_6c34d47 : nop
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
        UNREACHABLE_TRAP(0x6c34cb0)
    }
}

#undef public_6c34cc3
#undef public_6c34cc5
#undef public_6c34ce9
#undef public_6c34ced
#undef public_6c34cf2
#undef public_6c34d02
#undef public_6c34d18
#undef public_6c34d47
