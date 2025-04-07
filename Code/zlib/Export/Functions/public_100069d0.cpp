#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100069d0);

#define public_100069f4 _public_100069f4
#define public_10006a23 _public_10006a23
#define public_10006a24 _public_10006a24
#define public_10006a28 _public_10006a28
#define public_10006a4e _public_10006a4e
#define public_10006a69 _public_10006a69
#define public_10006a79 _public_10006a79
#define public_10006a89 _public_10006a89

PROC_DECLARE(0x100069d0, internal_100069d0, public_100069d0);
extern "C" NAKED register_t __cdecl internal_100069d0()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [eax+0x1448]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [eax+esi*4+0xB54]
        lea ecx, ds:[esi+esi]
        cmp ecx, edx
        mov dword ptr ss : [esp+0xC], ebp
        jg public_10006a89
        public_100069f4 : nop
        jge public_10006a28
        mov esi, dword ptr ds : [eax+ecx*4+0xB58]
        mov ebp, dword ptr ds : [eax+ecx*4+0xB54]
        mov dx, word ptr ds : [edi+esi*4]
        mov bx, word ptr ds : [edi+ebp*4]
        cmp dx, bx
        jb public_10006a23
        jne public_10006a24
        mov dl, byte ptr ds : [esi+eax+0x1450]
        cmp dl, byte ptr ds : [eax+ebp+0x1450]
        ja public_10006a24
        public_10006a23 : nop
        inc ecx
        public_10006a24 : nop
        mov ebp, dword ptr ss : [esp+0xC]
        public_10006a28 : nop
        mov esi, dword ptr ds : [eax+ecx*4+0xB54]
        mov dx, word ptr ds : [edi+ebp*4]
        mov bx, word ptr ds : [edi+esi*4]
        cmp dx, bx
        jb public_10006a69
        jne public_10006a4e
        mov dl, byte ptr ds : [eax+ebp+0x1450]
        cmp dl, byte ptr ds : [esi+eax+0x1450]
        jbe public_10006a79
        public_10006a4e : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+edx*4+0xB54], esi
        mov edx, dword ptr ds : [eax+0x1448]
        mov dword ptr ss : [esp+0x14], ecx
        shl ecx, 1
        cmp ecx, edx
        jle public_100069f4
        public_10006a69 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop esi
        mov dword ptr ds : [eax+ecx*4+0xB54], ebp
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_10006a79 : nop
        mov edx, dword ptr ss : [esp+0x14]
        pop esi
        mov dword ptr ds : [eax+edx*4+0xB54], ebp
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_10006a89 : nop
        mov dword ptr ds : [eax+esi*4+0xB54], ebp
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x100069d0)
    }
}

#undef public_100069f4
#undef public_10006a23
#undef public_10006a24
#undef public_10006a28
#undef public_10006a4e
#undef public_10006a69
#undef public_10006a79
#undef public_10006a89
