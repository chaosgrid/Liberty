#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f7d70);

#define public_65f7da0 _public_65f7da0
#define public_65f7dd5 _public_65f7dd5
#define public_65f7de1 _public_65f7de1
#define public_65f7deb _public_65f7deb
#define public_65f7dfa _public_65f7dfa

PROC_DECLARE(0x65f7d70, internal_65f7d70, public_65f7d70);
extern "C" NAKED register_t __cdecl internal_65f7d70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        add eax, 0xFFFFFFFE
        push ebx
        xor ebx, ebx
        test eax, eax
        mov dword ptr ds : [ecx], 0
        mov dword ptr ss : [esp+0x14], eax
        jbe public_65f7dfa
        mov edx, dword ptr ss : [esp+8]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        lea eax, ds:[edx+4]
        lea ebx, ds:[ebx]
        public_65f7da0 : nop
        mov dx, word ptr ds : [eax-4]
        mov di, word ptr ds : [eax-2]
        cmp dx, di
        je public_65f7deb
        mov bp, word ptr ds : [eax]
        cmp di, bp
        je public_65f7deb
        cmp bp, dx
        je public_65f7deb
        test bl, 1
        mov edi, dword ptr ds : [ecx]
        mov word ptr ds : [esi+edi*2], dx
        mov edx, dword ptr ds : [ecx]
        je public_65f7dd5
        mov di, word ptr ds : [eax]
        mov word ptr ds : [esi+edx*2+2], di
        mov di, word ptr ds : [eax-2]
        jmp public_65f7de1
        public_65f7dd5 : nop
        mov di, word ptr ds : [eax-2]
        mov word ptr ds : [esi+edx*2+2], di
        mov di, word ptr ds : [eax]
        public_65f7de1 : nop
        mov edx, dword ptr ds : [ecx]
        mov word ptr ds : [esi+edx*2+4], di
        add dword ptr ds : [ecx], 3
        public_65f7deb : nop
        mov edx, dword ptr ss : [esp+0x20]
        inc ebx
        add eax, 2
        cmp ebx, edx
        jb public_65f7da0
        pop edi
        pop esi
        pop ebp
        public_65f7dfa : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65f7d70)
    }
}

#undef public_65f7da0
#undef public_65f7dd5
#undef public_65f7de1
#undef public_65f7deb
#undef public_65f7dfa
