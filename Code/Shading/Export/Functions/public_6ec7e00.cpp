#include "Shading-PCH.h"


#define public_6ec7e13 _public_6ec7e13
#define public_6ec7e15 _public_6ec7e15
#define public_6ec7e39 _public_6ec7e39
#define public_6ec7e3d _public_6ec7e3d
#define public_6ec7e42 _public_6ec7e42
#define public_6ec7e52 _public_6ec7e52
#define public_6ec7e68 _public_6ec7e68
#define public_6ec7e94 _public_6ec7e94

PROC_DECLARE(0x6ec7e00, internal_6ec7e00, public_6ec7e00);
extern "C" NAKED register_t __cdecl internal_6ec7e00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed2be0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6ec7e52
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ec7e13 : nop
        mov esi, ebp
        public_6ec7e15 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ec7e3d
        test cl, cl
        je public_6ec7e39
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ec7e3d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ec7e15
        public_6ec7e39 : nop
        xor eax, eax
        jmp public_6ec7e42
        public_6ec7e3d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec7e42 : nop
        test eax, eax
        je public_6ec7e68
        mov eax, dword ptr ds : [edi*8+public_6ed2be8]
        inc edi
        test eax, eax
        jne public_6ec7e13
        public_6ec7e52 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6ec7e68 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed2be4]
        test eax, eax
        jns public_6ec7e94
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
        public_6ec7e94 : nop
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
        UNREACHABLE_TRAP(0x6ec7e00)
    }
}

#undef public_6ec7e13
#undef public_6ec7e15
#undef public_6ec7e39
#undef public_6ec7e3d
#undef public_6ec7e42
#undef public_6ec7e52
#undef public_6ec7e68
#undef public_6ec7e94
