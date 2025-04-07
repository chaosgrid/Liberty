#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6307460);
CLANG_FORWARD_PROC_SYMBOL(public_6329c70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639720f);

#define public_63291a8 _public_63291a8
#define public_63291bb _public_63291bb
#define public_63291f4 _public_63291f4
#define public_6329215 _public_6329215
#define public_6329229 _public_6329229
#define public_6329249 _public_6329249
#define public_6329255 _public_6329255
#define public_632926a _public_632926a
#define public_6329298 _public_6329298
#define public_63292b4 _public_63292b4
#define public_63292cb _public_63292cb
#define public_63292e2 _public_63292e2

PROC_DECLARE(0x6329130, internal_6329130, public_6329130);
extern "C" NAKED register_t __cdecl internal_6329130()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639720f @0x6329132*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639720f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push 0x14
        mov ebp, ecx
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_63292e2
        push esi
        push edi
        add ebp, 4
        mov cl, byte ptr ss : [esp+0x13]
        lea esi, ds:[eax+4]
        mov byte ptr ds : [esi], cl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        cmp esi, ebp
        mov dword ptr ds : [eax], offset public_63a3fec
        mov edi, dword ptr ss : [ebp+8]
        mov byte ptr ss : [esp+0x20], 2
        jne public_6329215
        cmp dword ptr ds : [esi+8], edi
        mov edx, dword ptr ds : [public_6399170]
        mov ebp, dword ptr ds : [edx]
        jae public_63291a8
        call dword ptr ds : [public_63991c4]
        public_63291a8 : nop
        mov ecx, esi
        call dword ptr ds : [public_63991c8]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebp
        jae public_63291bb
        mov ebp, eax
        public_63291bb : nop
        cmp ebp, ebx
        jbe public_63291f4
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea eax, ds:[edi+ebp]
        lea edx, ds:[ecx+eax*2]
        push edx
        lea eax, ds:[ecx+edi*2]
        push eax
        call public_6329c70
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push ebx
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6399150]
        test al, al
        je public_63291f4
        push edi
        mov ecx, esi
        call dword ptr ds : [public_639916c]
        public_63291f4 : nop
        push ebx
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_639915c]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        public_6329215 : nop
        cmp edi, ebx
        jbe public_6329298
        cmp edi, edi
        jne public_6329298
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ebx
        jne public_6329229
        mov eax, dword ptr ds : [public_639914c]
        public_6329229 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6329298
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_6329255
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6329249
        cmp cl, 0xFF
        je public_6329249
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6329255
        public_6329249 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6391d5a
        add esp, 4
        public_6329255 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ebx
        jne public_632926a
        mov eax, dword ptr ds : [public_639914c]
        public_632926a : nop
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        mov eax, dword ptr ss : [esp+8]
        pop ebx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        public_6329298 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6399150]
        test al, al
        je public_63292cb
        mov ebp, dword ptr ss : [ebp+4]
        test ebp, ebp
        jne public_63292b4
        mov ebp, dword ptr ds : [public_639914c]
        public_63292b4 : nop
        mov eax, dword ptr ds : [esi+4]
        push edi
        push ebp
        push eax
        call public_6307460
        add esp, 0xC
        push edi
        mov ecx, esi
        call dword ptr ds : [public_639916c]
        public_63292cb : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        public_63292e2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6329130)
    }
}

#undef public_63291a8
#undef public_63291bb
#undef public_63291f4
#undef public_6329215
#undef public_6329229
#undef public_6329249
#undef public_6329255
#undef public_632926a
#undef public_6329298
#undef public_63292b4
#undef public_63292cb
#undef public_63292e2
