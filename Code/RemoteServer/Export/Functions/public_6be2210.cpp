#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be2210);
CLANG_FORWARD_PROC_SYMBOL(public_6be25c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be2279 _public_6be2279
#define public_6be228d _public_6be228d
#define public_6be2293 _public_6be2293
#define public_6be22a1 _public_6be22a1
#define public_6be22e2 _public_6be22e2
#define public_6be22fb _public_6be22fb
#define public_6be230e _public_6be230e
#define public_6be2319 _public_6be2319
#define public_6be231c _public_6be231c
#define public_6be2321 _public_6be2321
#define public_6be234a _public_6be234a
#define public_6be2363 _public_6be2363
#define public_6be2376 _public_6be2376
#define public_6be2380 _public_6be2380
#define public_6be23a3 _public_6be23a3
#define public_6be23bb _public_6be23bb
#define public_6be23ce _public_6be23ce
#define public_6be23db _public_6be23db
#define public_6be23dd _public_6be23dd
#define public_6be23e3 _public_6be23e3
#define public_6be240c _public_6be240c
#define public_6be241f _public_6be241f
#define public_6be242a _public_6be242a
#define public_6be242d _public_6be242d
#define public_6be242f _public_6be242f
#define public_6be2432 _public_6be2432
#define public_6be243e _public_6be243e

PROC_DECLARE(0x6be2210, internal_6be2210, public_6be2210);
extern "C" NAKED register_t __cdecl internal_6be2210()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6c09d26
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6be25c0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6be2279
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6be2279
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6be2279
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6be2293
        mov dword ptr ds : [eax+8], ebx
        jmp public_6be2293
        public_6be2279 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6be228d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6be2293
        public_6be228d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6be2293
        mov dword ptr ds : [eax], ebx
        public_6be2293 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6be243e
        public_6be22a1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6be243e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6be2380
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6be22e2
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6be2432
        public_6be22e2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6be2321
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6be22fb
        mov dword ptr ds : [edx+4], eax
        public_6be22fb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6be230e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6be231c
        public_6be230e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6be2319
        mov dword ptr ds : [edx], ecx
        jmp public_6be231c
        public_6be2319 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6be231c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6be2321 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6be234a
        mov dword ptr ds : [edi+4], ecx
        public_6be234a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6be2363
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6be242f
        public_6be2363 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6be2376
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6be242f
        public_6be2376 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6be242f
        public_6be2380 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6be23a3
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6be2432
        public_6be23a3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6be23e3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6be23bb
        mov dword ptr ds : [edx+4], eax
        public_6be23bb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6be23ce
        mov dword ptr ds : [edx+4], ecx
        jmp public_6be23dd
        public_6be23ce : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6be23db
        mov dword ptr ds : [edx+8], ecx
        jmp public_6be23dd
        public_6be23db : nop
        mov dword ptr ds : [edx], ecx
        public_6be23dd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6be23e3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6be240c
        mov dword ptr ds : [edi+4], ecx
        public_6be240c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6be241f
        mov dword ptr ds : [edi+4], edx
        jmp public_6be242d
        public_6be241f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6be242a
        mov dword ptr ds : [edi], edx
        jmp public_6be242d
        public_6be242a : nop
        mov dword ptr ds : [edi+8], edx
        public_6be242d : nop
        mov dword ptr ds : [edx], ecx
        public_6be242f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6be2432 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6be22a1
        public_6be243e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6be2210)
    }
}

#undef public_6be2279
#undef public_6be228d
#undef public_6be2293
#undef public_6be22a1
#undef public_6be22e2
#undef public_6be22fb
#undef public_6be230e
#undef public_6be2319
#undef public_6be231c
#undef public_6be2321
#undef public_6be234a
#undef public_6be2363
#undef public_6be2376
#undef public_6be2380
#undef public_6be23a3
#undef public_6be23bb
#undef public_6be23ce
#undef public_6be23db
#undef public_6be23dd
#undef public_6be23e3
#undef public_6be240c
#undef public_6be241f
#undef public_6be242a
#undef public_6be242d
#undef public_6be242f
#undef public_6be2432
#undef public_6be243e
